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
    ListNode* removeElements(ListNode* Head, int Target) {
        while (Head != nullptr && Head->val == Target)
        {
            Head = Head->next;
        }
        
        ListNode* Node = Head;
        
        while (Node != nullptr && Node->next != nullptr)
        {
            if (Node->next->val != Target)
            {
                Node = Node->next;
            }
            else
            {
                Node->next = Node->next->next;
            }
        }
        
        return Head;
    }
};