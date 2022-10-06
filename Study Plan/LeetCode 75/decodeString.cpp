class Solution {
public:
    string decodeString(string s) {
        stack<string>chars;
        stack<int>nums;
        string currString = "";
        int currNum = 0;
        for(char it:s)
        {
            if(isdigit(it))
            {
                currNum = currNum*10 + (it-'0');
            }
            else if(isalpha(it))
            {
                currString.push_back(it);
            }
            else if(it == '[')
            {
                chars.push(currString);
                nums.push(currNum);
                currString = "";
                currNum = 0;
            }
            else if(it == ']')
            {
                string tmp = currString;
                for(int i=0; i<nums.top()-1; i++)
                {
                    currString += tmp;
                }
                currString = chars.top()+currString;
                chars.pop(); nums.pop();
            }
        }
        return currString;
    }
};
