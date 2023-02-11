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
    vector<int> preorderTraversal(TreeNode* Root) {
        TreeNode* Node = Root;
        stack<TreeNode*> Stack;
        vector<int> Result;
        
        while (Node != nullptr)
        {
            Result.push_back(Node->val);
            
            if (Node->left != nullptr)
            {
                if (Node->right != nullptr)
                {
                    Stack.push(Node->right);
                }
                
                Node = Node->left;
                continue;
            }
            
            if (Node->right != nullptr)
            {
                Node = Node->right;
                continue;
            }
            
            if (!Stack.empty())
            {
                Node = Stack.top();
                Stack.pop();
            }
            else
            {
                break;
            }
        }
        
        return Result;
    }
};