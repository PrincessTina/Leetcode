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
    vector<int> inorderTraversal(TreeNode* Root) {
        TreeNode* Node = Root;
        stack<TreeNode*> Stack;
        vector<int> Result;
        
        while (true)
        {
            if (Node == nullptr)
            {
                if (!Stack.empty())
                {
                    Result.push_back(Stack.top()->val);
                    Node = Stack.top()->right;
                    Stack.pop();
                    continue;
                }
                
                break;
            }
            
            Stack.push(Node);
            
            if (Node->left != nullptr)
            {
                Node = Node->left;
                continue;
            }
            
            Stack.pop();
            Result.push_back(Node->val);
            
            if (Node->right != nullptr)
            {
                Node = Node->right;
                continue;
            }
            
            Node = nullptr;
        }
        
        return Result;
    }
};