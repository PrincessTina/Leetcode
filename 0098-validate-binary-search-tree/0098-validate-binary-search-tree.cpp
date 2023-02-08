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
    bool isValidBST(TreeNode* Root) {
        // value, IsLess
        
        GoDeep(Root->left, {{Root->val, true}});
        GoDeep(Root->right, {{Root->val, false}});
        
        return IsValidBST;
    }
    
private:
    bool IsValidBST = true;
    
    void GoDeep(TreeNode* Node, vector<pair<int, bool>> Validation)
    {
        if (Node == nullptr)
        {
            return;
        }
        
        for (pair<int, bool> ValidationElement: Validation)
        {
            if (ValidationElement.second && Node->val >= ValidationElement.first)
            {
                IsValidBST = false;
                return;
            }
            else if (!ValidationElement.second && Node->val <= ValidationElement.first)
            {
                IsValidBST = false;
                return;
            }
        }
        
        Validation.push_back({Node->val, true});
        GoDeep(Node->left, Validation);
        
        Validation[Validation.size() - 1].second = false;
        GoDeep(Node->right, Validation);
    }
};