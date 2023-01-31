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
    bool isPalindrome(ListNode* Head) {
        ListNode* Current = Head;
        ListNode* Future = Head;
        stack<int> Values;
        
        while(Current != nullptr)
        {
            if (Future->next != nullptr)
            {
                Values.push(Current->val);
                
                if (Future->next->next != nullptr)
                {
                    if (Future->next->next->next == nullptr)
                    {
                        Values.push(Current->next->val);
                    }
                    
                    Future = Future->next->next;
                }
                else
                {
                    Future = Future->next;
                }
            }
            else if (!Values.empty())
            {
                if (Values.top() != Current->val)
                {
                    return false;
                }
                
                Values.pop();
            }
            
            Current = Current->next;
        }
        
        return Values.empty();
    }
};