Determine if a 9 x 9 Sudoku board is valid. Only the filled cells need to be validated according to the following rules:

Each row must contain the digits 1-9 without repetition.
Each column must contain the digits 1-9 without repetition.
Each of the nine 3 x 3 sub-boxes of the grid must contain the digits 1-9 without repetition.

class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {

        unordered_map<char, int>row[9];
        unordered_map<char, int>col[9];
        unordered_map<char, int>box[9];
        
        for(int i = 0; i < 9; i++)
        {
            for(int j = 0 ; j < 9; j++)
            {
                char ch = board[i][j];
                if(ch!='.'&& (row[i][ch]++ > 0 || col[j][ch]++ > 0 || box[i/3*3+j/3][ch]++ > 0)) return false;
            }
        }
        return true;
    }
};
