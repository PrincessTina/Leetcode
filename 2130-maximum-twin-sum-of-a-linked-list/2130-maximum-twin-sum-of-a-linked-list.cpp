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
    // 5 4 3 2 1 7 8
    // 5 4 2 1
    // 5 4
    int pairSum(ListNode* Node) {
        ListNode* Last = Node;
        vector<int> Sum;
        int HalfNodes = 0;
        int Max = 0;
        
        while (Last != nullptr)
        {
            Sum.push_back(Node->val);
            HalfNodes++;
            
            Node = Node->next;
            Last = Last->next->next;
        }
        
        int i = HalfNodes;
        int Nodes = HalfNodes * 2;
        
        while (Node != nullptr)
        {
            int TwinIndex = Nodes - 1 - i;
            
            Sum[TwinIndex] += Node->val;
            Node = Node->next;
            
            if (Sum[TwinIndex] > Max)
            {
                Max = Sum[TwinIndex];
            }
            
            i++;
        }
        
        return Max;
    }
};