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
    ListNode* swapPairs(ListNode* Head) {
        ListNode* PreHead = new ListNode();
        ListNode* Node = PreHead;
        PreHead->next = Head;
        
        while (Node != nullptr && Node->next != nullptr && Node->next->next != nullptr)
        {
            ListNode* First = Node->next;
            ListNode* Second = First->next;
            ListNode* Third = Second->next;
            
            Node->next = Second;
            Second->next = First;
            First->next = Third;
            
            Node = First;
        }
        
        return PreHead->next;
    }
};