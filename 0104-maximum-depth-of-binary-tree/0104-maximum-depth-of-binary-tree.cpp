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
    int maxDepth(TreeNode* Root) {
        GoDeep(Root, 1);
        return MaxDepth;
    }
    
private:
    int MaxDepth = 0;
    
    void GoDeep(TreeNode* Node, int Depth)
    {
        if (Node == nullptr)
        {
            return;
        }
        
        if (Depth > MaxDepth)
        {
            MaxDepth = Depth;
        }
        
        GoDeep(Node->left, Depth + 1);
        GoDeep(Node->right, Depth + 1);
    }
};