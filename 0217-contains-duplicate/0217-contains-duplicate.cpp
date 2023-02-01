class Solution {
public:
    bool containsDuplicate(vector<int>& Nums) {
        unordered_set<int> Set;
        
        for (int Num: Nums)
        {
            if (Set.count(Num))
            {
                return true;
            }
            
            Set.insert(Num);
        }
        
        return false;
    }
};