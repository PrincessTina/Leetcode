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
    ListNode* deleteDuplicates(ListNode* Head) {
        ListNode* Node = Head;
        
        while (Node != nullptr && Node->next != nullptr)
        {
            if (Node->val == Node->next->val)
            {
                Node->next = Node->next->next;
            }
            else
            {
                Node = Node->next;
            }
        }
        
        return Head;
    }
};