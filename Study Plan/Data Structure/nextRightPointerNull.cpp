/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        if(root==NULL) return NULL;
        
        Node* current = root;
        while(current->left!=NULL)
        {
            Node* temp = current;
            while(current!=NULL)
            {
                current->left->next=current->right;
                if(current->next!=NULL)
                    current->right->next=current->next->left;
                else
                    current->right=NULL;
                current=current->next;
            }
            current=temp->left;
        }
        return root;
    }
};


/*=======================OR================================*/

void connect(TreeLinkNode *root) {
    if(!root)
        return;
    while(root -> left)
    {
        TreeLinkNode *p = root;
        while(p)
        {
            p -> left -> next = p -> right;
            if(p -> next)
                p -> right -> next = p -> next -> left;
            p = p -> next;
        }
        root = root -> left;
    }
}


