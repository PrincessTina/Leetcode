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
    bool hasPathSum(TreeNode* Root, int Target) {
        TargetSum = Target;
        GoDeep(Root);
        
        return Succeed;
    }
    
private:
    int CurrentSum = 0;
    int TargetSum = 0;
    bool Succeed = false;
    
    void GoDeep(TreeNode* Node)
    {
        if (Node == nullptr)
        {
            return;
        }
        
        CurrentSum += Node->val;
        
        if (Node->left == nullptr && Node->right == nullptr && CurrentSum == TargetSum)
        {
            Succeed = true;
            return;
        }
        
        GoDeep(Node->left);
        GoDeep(Node->right);
        
        CurrentSum -= Node->val;
    }
};