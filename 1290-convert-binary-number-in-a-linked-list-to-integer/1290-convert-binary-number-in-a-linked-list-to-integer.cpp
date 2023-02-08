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
    int getDecimalValue(ListNode* Node) {
        string Digit = "";
        
        while (Node != nullptr)
        {
            Digit += to_string(Node->val);
            Node = Node->next;
        }
        
        return stoi(Digit, 0, 2);
    }
};