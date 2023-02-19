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
    vector<vector<int>> zigzagLevelOrder(TreeNode* Root) {
        GoDeep(Root, 0);
        
        for (int i = 1; i < Result.size(); i += 2)
        {
            reverse(Result[i].begin(), Result[i].end());
        }
        
        return Result;
    }
    
private:
    vector<vector<int>> Result;
    
    void GoDeep(TreeNode* Node, int Level)
    {
        if (Node == nullptr)
        {
            return;
        }
        
        if (Result.size() <= Level)
        {
            Result.push_back({Node->val});
        }
        else
        {
            Result[Level].push_back(Node->val);
        }
        
        GoDeep(Node->left, Level + 1);
        GoDeep(Node->right, Level + 1);
    }
};