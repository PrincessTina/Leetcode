/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* Root) {
        GoDeep(Root);
        return Root;
    }
    
private:
    void GoDeep(Node* Node)
    {
        if (Node == nullptr || Node->left == nullptr)
        {
            return;
        }
        
        Node->left->next = Node->right;
        
        if (Node->next != nullptr)
        {
            Node->right->next = Node->next->left;
        }
        
        GoDeep(Node->left);
        GoDeep(Node->right);
    }
};