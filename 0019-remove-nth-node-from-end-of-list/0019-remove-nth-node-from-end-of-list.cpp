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
    ListNode* removeNthFromEnd(ListNode* Head, int n) {
        SaveNode(Head, 0);
        
        const int NodeIndex = Size - n;
        
        if (NodeIndex - 1 < 0)
        {
            return Nodes[NodeIndex]->next;
        }
        
        if (NodeIndex + 1 >= Size)
        {
            Nodes[NodeIndex - 1]->next = nullptr;
            return Head;
        }
        
        Nodes[NodeIndex - 1]->next = Nodes[NodeIndex + 1];
        return Head;
    }
    
private:
    unordered_map<int, ListNode*> Nodes;
    int Size = 0;
    
    void SaveNode(ListNode* Node, int Index)
    {
        if (Node == nullptr)
        {
            return;
        }
        
        Size++;
        Nodes.insert({Index, Node});
        SaveNode(Node->next, Index + 1);
    }
};