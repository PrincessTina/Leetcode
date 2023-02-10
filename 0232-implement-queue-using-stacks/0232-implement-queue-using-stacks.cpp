class MyQueue {
public:
    MyQueue() {}
    
    void push(int X) {
        if (First == nullptr)
        {
            First = new ListNode(X);
            Last = First;
        }
        else
        {
            Last->Next = new ListNode(X);
            Last = Last->Next;
        }
        
        Size++;
    }
    
    int pop() {
        int Value = First->Value;
        
        First = First->Next;
        Size--;
        
        return Value;
    }
    
    int peek() {
        return First->Value;
    }
    
    bool empty() {
        return Size == 0;
    }

private:
    struct ListNode {
        int Value;
        ListNode* Next;
        ListNode(int X): Value(X), Next(nullptr) {}
    };  
    
    ListNode* First = nullptr;
    ListNode* Last = nullptr;
    int Size = 0;
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */