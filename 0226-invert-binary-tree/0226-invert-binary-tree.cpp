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
    TreeNode* invertTree(TreeNode* Root) {
        SwapChilds(Root);
        return Root;
    }
    
private:
    void SwapChilds(TreeNode* Node)
    {
        if (Node == nullptr)
        {
            return;
        }
        
        TreeNode* Temp = Node->left;
        Node->left = Node->right;
        Node->right = Temp;
        
        SwapChilds(Node->left);
        SwapChilds(Node->right);
    }
};