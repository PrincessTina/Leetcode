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
    ListNode* addTwoNumbers(ListNode* Node1, ListNode* Node2) {
        int Sum = 0;
        ListNode* Head = nullptr;
        ListNode* Node3 = nullptr;
        
        while (Node1 != nullptr || Node2 != nullptr)
        {
            Sum = Sum / 10;
            
            if (Node1 != nullptr)
            {
                Sum += Node1->val;
                Node1 = Node1->next;
            }
            
            if (Node2 != nullptr)
            {
                Sum += Node2->val;
                Node2 = Node2->next;
            }
            
            if (Node3 == nullptr)
            {
                Head = Node3 = new ListNode(Sum % 10, nullptr);
            }
            else
            {
                Node3->next = new ListNode(Sum % 10, nullptr);
                Node3 = Node3->next;
            }
        }
        
        if (Sum > 9)
        {
            Node3->next = new ListNode(1, nullptr);
        }
        
        return Head;
    }
};