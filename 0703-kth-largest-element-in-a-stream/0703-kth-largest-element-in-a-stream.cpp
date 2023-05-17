class KthLargest {
public:
    KthLargest(int k, vector<int>& Nums) {
        copy(Nums.begin(), Nums.end(), back_inserter(Heap));
        make_heap(Heap.begin(), Heap.end(), greater<>{});
        
        Limit = k;
        
        while (Heap.size() > Limit)
        {
            pop_heap(Heap.begin(), Heap.end(), greater<>{});
            Heap.pop_back();
        }
    }
    
    int add(int Value) {
        Heap.push_back(Value);
        push_heap(Heap.begin(), Heap.end(), greater<>{});
        
        while (Heap.size() > Limit)
        {
            pop_heap(Heap.begin(), Heap.end(), greater<>{});
            Heap.pop_back();
        }
        
        return Heap.front();
    }
    
private:
    vector<int> Heap;
    int Limit;
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */