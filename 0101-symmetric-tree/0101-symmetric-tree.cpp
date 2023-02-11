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
    bool isSymmetric(TreeNode* Root) {
        AddNode(Root->left, true);
        CheckNode(Root->right, false);
        
        return Stack.empty() && IsValidTree;
    }
    
private:
    stack<pair<int, bool>> Stack;
    bool IsValidTree = true;
    
    void AddNode(TreeNode* Node, bool IsLeft)
    {
        if (Node == nullptr)
        {
            return;
        }
        
        AddNode(Node->left, true);
        AddNode(Node->right, false);
        Stack.push({Node->val, IsLeft});
    }
    
    void CheckNode(TreeNode* Node, bool IsLeft)
    {
        if (Node == nullptr)
        {
            return;
        }
        
        if (Stack.empty() || Stack.top().first != Node->val || Stack.top().second == IsLeft)
        {
            IsValidTree = false;
            return;
        }
        
        Stack.pop();
        CheckNode(Node->left, true);
        CheckNode(Node->right, false);
    }
};