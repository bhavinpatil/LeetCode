/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* dup = head;
        while(dup!=NULL && dup->next != NULL)
        {
            ListNode* temp = dup->next;
            if(dup->val == temp->val)
                dup->next = temp->next;
            else
                dup = temp;
        }
        return head;
    }
};
