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
    bool hasCycle(ListNode* Node) {
        unordered_set<ListNode*> Nodes;
        
        while (Node != nullptr)
        {
            if (Nodes.count(Node) != 0)
            {
                return true;
            }
            
            Nodes.insert(Node);
            Node = Node->next;
        }
        
        return false;
    }
};