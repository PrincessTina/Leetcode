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
    vector<vector<int>> Matrix;
    
    vector<vector<int>> levelOrder(TreeNode* Root) {
        GoDeep(Root, 0);
        return Matrix;
    }
    
    void GoDeep(TreeNode* Node, int Level)
    {
        if (Node == nullptr)
        {
            return;
        }
        
        if (Level >= Matrix.size())
        {
            Matrix.push_back({Node->val});
        }
        else
        {
            Matrix[Level].push_back(Node->val);
        }
        
        GoDeep(Node->left, Level + 1);
        GoDeep(Node->right, Level + 1);
    }
};