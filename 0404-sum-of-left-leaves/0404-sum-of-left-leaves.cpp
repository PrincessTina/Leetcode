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
    int sumOfLeftLeaves(TreeNode* Root) {
        GoDeep(Root);
        return Sum;
    }
    
private:
    int Sum = 0;
    
    void GoDeep(TreeNode* Node)
    {
        if (Node == nullptr)
        {
            return;
        }
        
        if (Node->left != nullptr)
        {
            if (Node->left->left == nullptr && Node->left->right == nullptr)
            {
                Sum += Node->left->val;
            }
            else
            {
                GoDeep(Node->left);
            }
        }
        
        if (Node->right != nullptr)
        {
            GoDeep(Node->right);
        }
    }
};