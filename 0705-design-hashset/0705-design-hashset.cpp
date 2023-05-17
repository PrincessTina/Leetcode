class MyHashSet {
public:
    MyHashSet() {
       
    }
    
    void add(int Key) {
        while (Key >= Set.size())
        {
            Set.push_back(0);
        }
        
        Set[Key] = 1;
    }
    
    void remove(int Key) {
        if (Key < Set.size())
        {
            Set[Key] = 0;
        }
    }
    
    bool contains(int Key) {
        return Key < Set.size() && Set[Key] == 1;
    }
    
private:
    vector<int> Set;
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */