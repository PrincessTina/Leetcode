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
    TreeNode* insertIntoBST(TreeNode* Root, int Value) {
        Target = Value;
        
        if (Root == nullptr)
        {
            Root = new TreeNode(Target);
        }
        else
        {
            InsertNode(Root);
        }
        
        return Root;
    }
    
private:
    int Target = 0;
    
    void InsertNode(TreeNode* Root)
    {
        if (Target < Root->val)
        {
            if (Root->left == nullptr)
            {
                Root->left = new TreeNode(Target);
                return;
            }
            
            InsertNode(Root->left);
        }
        else
        {
            if (Root->right == nullptr)
            {
                Root->right = new TreeNode(Target);
                return;
            }
            
            InsertNode(Root->right);
        }
    }
};