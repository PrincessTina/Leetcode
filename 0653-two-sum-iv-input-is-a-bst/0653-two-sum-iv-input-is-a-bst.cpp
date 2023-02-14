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
    bool findTarget(TreeNode* Root, int k) {
        Target = k;
        AddElement(Root);
        
        return IsTargetExists;
    }
    
private:
    unordered_set<int> Set;
    bool IsTargetExists = false;
    int Target = 0;
    
    void AddElement(TreeNode* Node)
    {
        if (Node == nullptr)
        {
            return;
        }
        
        if (Set.count(Target - Node->val))
        {
            IsTargetExists = true;
            return;
        }
        
        Set.insert(Node->val);
        AddElement(Node->left);
        AddElement(Node->right);
    }
};