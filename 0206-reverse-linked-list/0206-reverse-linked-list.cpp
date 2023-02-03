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
    ListNode* reverseList(ListNode* Node) {
        stack<ListNode*> Stack;
        ListNode* Head;
        
        if (Node == nullptr)
        {
            return nullptr;
        }
        
        while (Node != nullptr)
        {
            Stack.push(Node);
            Node = Node->next;
        }
        
        Head = Stack.top();
        
        while (!Stack.empty())
        {
            Node = Stack.top();
            Stack.pop();
            
            if (!Stack.empty())
            {
                Node->next = Stack.top();
            }
            else
            {
                Node->next = nullptr;
            }
        }
        
        return Head;
    }
};