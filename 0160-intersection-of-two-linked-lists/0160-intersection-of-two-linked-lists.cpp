/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* getIntersectionNode(ListNode* NodeA, ListNode* NodeB) {
        unordered_set<ListNode*> Nodes;
        
        while (NodeA != nullptr || NodeB != nullptr)
        {
            if (NodeA != nullptr)
            {
                if (InsertNode(Nodes, NodeA))
                {
                    return NodeA;
                }
                
                NodeA = NodeA->next;
            }
            
            if (NodeB != nullptr)
            {
                if (InsertNode(Nodes, NodeB))
                {
                    return NodeB;
                }
                
                NodeB = NodeB->next;
            }
        }
        
        return nullptr;
    }
    
    /* Return true, if Node already exists */
    bool InsertNode(unordered_set<ListNode*>& Nodes, ListNode* Node)
    {
        if (Node == nullptr)
        {
            return false;
        }
        
        if (Nodes.count(Node) > 0)
        {
            return true;
        }
        
        Nodes.insert(Node);
        return false;
    }
};