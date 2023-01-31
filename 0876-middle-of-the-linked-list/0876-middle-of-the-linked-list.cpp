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
    ListNode* middleNode(ListNode* Head) {
        ListNode* End = Head;
        int NodesCount = 0;
        
        while (End != nullptr)
        {
            NodesCount++;
            End = End->next;
        }
        
        const int MiddleNodeIndex = NodesCount / 2;
        ListNode* MiddleNode = Head;
        
        for (int i = 0; i < MiddleNodeIndex; i++)
        {
            MiddleNode = MiddleNode->next;
        }
        
        return MiddleNode;
    }
};