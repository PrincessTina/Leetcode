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
    vector<int> postorderTraversal(TreeNode* Root) {
        GoDeep(Root);
        return Result;
    }
    
private:
    vector<int> Result;
    
    void GoDeep(TreeNode* Node)
    {
        if (Node == nullptr)
        {
            return;
        }
        
        GoDeep(Node->left);
        GoDeep(Node->right);
        Result.push_back(Node->val);
    }
};