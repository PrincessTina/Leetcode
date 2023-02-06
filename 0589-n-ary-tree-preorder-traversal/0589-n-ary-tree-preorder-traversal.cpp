/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<int> preorder(Node* Root) {
        GoDeep(Root);
        return Values;
    }
    
private:
    vector<int> Values;
    
    void GoDeep(Node* Current)
    {
        if (Current == nullptr)
        {
            return;
        }
        
        Values.push_back(Current->val);
        
        for (Node* Child: Current->children)
        {
            GoDeep(Child);
        }
    }
};