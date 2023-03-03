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
        
        GoDeep(Node->left);
        GoDeep(Node->right);
        
        const int Left = Node->left == nullptr ? -1 : Node->left->val;
        const int Right = Node->right == nullptr ? -1 : Node->right->val;
        
        if (abs(Right - Left) > 1)
        {
            IsBalanced = false;
            return;
        }
        
        Node->val = Left > Right ? Left + 1 : Right + 1;
    }
};