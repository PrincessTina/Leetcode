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
    ListNode* mergeTwoLists(ListNode* Head1, ListNode* Head2) {
        ListNode* Current;
        ListNode* Insertion;
        ListNode* Head;
        
        if (Head1 == nullptr)
        {
            return Head2;
        }
        
        if (Head2 == nullptr)
        {
            return Head1;
        }
        
        if (Head1->val <= Head2->val)
        {
            Head = Current = Head1;
            Insertion = Head2;
        }
        else
        {
            Head = Current = Head2;
            Insertion = Head1;
        }
        
        while (Insertion != nullptr)
        {
            while (Current->next != nullptr && Current->next->val <= Insertion->val)
            {
                Current = Current->next;
            }
            
            ListNode* Temp = Insertion->next;
            Insertion->next = Current->next;
            Current->next = Insertion;
            Insertion = Temp;
        }
        
        return Head;
    }
};