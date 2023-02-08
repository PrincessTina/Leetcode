/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* Node, TreeNode* P, TreeNode* Q) 
    {
        if (Q->val < P->val)
        {
            TreeNode* Temp = P;
            P = Q;
            Q = Temp;
        }
        
        while (Node != nullptr)
        {
            if (Node->val == P->val || Node->val == Q->val)
            {
                return Node;
            }
            
            if (Node->val > P->val && Node->val < Q->val)
            {
                return Node;
            }
            
            if (P->val < Node->val)
            {
                Node = Node->left;
            }
            else
            {
                Node = Node->right;
            }
        }
        
        /*while (Node != nullptr)
        {
            if (Node->val == P->val || Node->val == Q->val)
            {
                return Node;
            }
            
            if (Node->left != nullptr && Node->right != nullptr)
            {
                if (Node->left->val == P->val && Node->right->val == Q->val)
                {
                    return Node;
                }

                if (Node->left->val == Q->val && Node->right->val == P->val)
                {
                    return Node;
                }
            }
            
            if (P->val < Node->val)
            {
                Node = Node->left;
            }
            else
            {
                Node = Node->right;
            }
        }*/
        
        return Node;
    }
};