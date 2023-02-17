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
    int minDiffInBST(TreeNode* Root) {
        GoDeep(Root);
        return Min;
    }
    
private:
    int Previous = -1;
    int Min = -1;
    
    void GoDeep(TreeNode* Node)
    {
        if (Node == nullptr)
        {
            return;
        }
        
        GoDeep(Node->left);
        
        if (Previous != -1 && (Min == -1 || Node->val - Previous < Min))
        {
            Min = Node->val - Previous;
        }
        
        Previous = Node->val;
        GoDeep(Node->right);
    }
};