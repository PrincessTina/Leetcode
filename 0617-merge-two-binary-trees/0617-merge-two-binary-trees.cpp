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
    TreeNode* mergeTrees(TreeNode* Root1, TreeNode* Root2) {
        if (Root1 != nullptr && Root2 != nullptr)
        {
            GoDeep(Root1, Root2);
        }
        else if (Root1 == nullptr)
        {
            Root1 = Root2;
        }
        
        return Root1;
    }
    
private:
    void GoDeep(TreeNode* Node1, TreeNode* Node2)
    {
        Node1->val += Node2->val;
        
        if (Node1->left != nullptr && Node2->left != nullptr)
        {
            GoDeep(Node1->left, Node2->left);
        }
        else if (Node1->left == nullptr)
        {
            Node1->left = Node2->left;
        }
        
        if (Node1->right != nullptr && Node2->right != nullptr)
        {
            GoDeep(Node1->right, Node2->right);
        }
        else if (Node1->right == nullptr)
        {
            Node1->right = Node2->right;
        }
    }
};