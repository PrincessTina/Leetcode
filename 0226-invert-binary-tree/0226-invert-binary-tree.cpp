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

/*
4
7
9
6
2
3
1
*/
class Solution {
public:
    TreeNode* invertTree(TreeNode* Root) {
        SwapChilds(Root);
        
        //SaveNode(Root);
        //RewriteNode(Root);
        
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
    
    /*stack<int> Stack;
    
    void SaveNode(TreeNode* Node)
    {
        if (Node == nullptr)
        {
            return;
        }
        
        SaveNode(Node->left);
        SaveNode(Node->right);
        Stack.push(Node->val);
    }
    
    void RewriteNode(TreeNode* Node)
    {
        if (Node == nullptr || Stack.empty())
        {
            return;
        }
        
        Node->val = Stack.top();
        Stack.pop();
        
        RewriteNode(Node->left);
        RewriteNode(Node->right);
    }*/
};