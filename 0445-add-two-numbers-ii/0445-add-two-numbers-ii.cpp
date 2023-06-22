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
        stack<ListNode*> Stack1;
        stack<ListNode*> Stack2;
        
        while (Node1 != nullptr)
        {
            Stack1.push(Node1);
            Node1 = Node1->next;
        }
        
        while (Node2 != nullptr)
        {
            Stack2.push(Node2);
            Node2 = Node2->next;
        }
        
        ListNode* Prev = nullptr;
        int Rest = 0;
        
        while (true)
        {
            ListNode* Current = nullptr;
            int Sum = Rest;
            Rest = 0;
            
            if (!Stack1.empty())
            {
                Current = Stack1.top();
                Sum += Current->val;
                
                Stack1.pop();
            }
            
            if (!Stack2.empty())
            {
                Sum += Stack2.top()->val;
                
                if (Current == nullptr)
                {
                    Current = Stack2.top();
                }
                
                Stack2.pop();
            }
            
            if (Sum >= 10)
            {
                Sum -= 10;
                Rest = 1;
            }
            
            if (Current == nullptr)
            {
                if (Sum > 0)
                {
                    return new ListNode(Sum, Prev);
                }
                
                return Prev;
            }
            
            Current->val = Sum;
            Current->next = Prev;
            Prev = Current;
        }
    }
};