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
        vector<int> Values;
        
        GoDeep(Root, Values);
        return Values;
    }
    
    void GoDeep(Node* Current, vector<int>& Values)
    {
        if (Current == nullptr)
        {
            return;
        }
        
        Values.push_back(Current->val);
        
        for (Node* Child: Current->children)
        {
            GoDeep(Child, Values);
        }
    }
};