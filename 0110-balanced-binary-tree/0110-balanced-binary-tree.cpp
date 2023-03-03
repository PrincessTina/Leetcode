/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool isBalanced(TreeNode* Root) {
        GoDeep(Root);
        return IsBalanced;
    }
    
private:
    bool IsBalanced = true;
    
    void GoDeep(TreeNode* Node)
    {
        if (Node == nullptr)
        {
            return;
        }
        
        if (Node->left == nullptr && Node->right == nullptr)
        {
            Node->val = 0;
            return;
        }
        
        GoDeep(Node->left);
        GoDeep(Node->right);
        
        if (Node->left == nullptr || Node->right == nullptr)
        {
            if (Node->left == nullptr)
            {
                Node->val = Node->right->val + 1;
            }
            else
            {
                Node->val = Node->left->val + 1;
            }
            
            if (Node->val > 1)
            {
                IsBalanced = false;
            }
            
            return;
        }
        
        if (abs(Node->right->val - Node->left->val) > 1)
        {
            IsBalanced = false;
            return;
        }
        
        if (Node->right->val > Node->left->val)
        {
            Node->val = Node->right->val + 1;
        }
        else
        {
            Node->val = Node->left->val + 1;
        }
    }
};