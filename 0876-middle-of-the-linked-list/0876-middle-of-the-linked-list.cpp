/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* middleNode(ListNode* Head) {
        vector<ListNode*> Nodes;
        ListNode* Node = Head;
        
        while (Node != nullptr)
        {
            Nodes.push_back(Node);
            Node = Node->next;
        }
        
        return Nodes[Nodes.size() * 0.5];
    }
};