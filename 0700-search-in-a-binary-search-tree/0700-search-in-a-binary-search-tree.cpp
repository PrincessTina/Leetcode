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
    TreeNode* searchBST(TreeNode* Root, int Value) {
        Target = Value;
        SearchTree(Root);
        
        return Result;
    }
    
private:
    TreeNode* Result = nullptr;
    int Target = 0;
    
    void SearchTree(TreeNode* Node)
    {
        if (Node == nullptr)
        {
            return;
        }
        
        if (Target == Node->val)
        {
            Result = Node;
            return;
        }
        
        if (Target < Node->val)
        {
            SearchTree(Node->left);
        }
        else
        {
            SearchTree(Node->right);
        }
    }
};