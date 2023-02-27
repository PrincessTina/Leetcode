class Solution {
public:
    int singleNumber(vector<int>& Nums) {
        unordered_set<int> Set;
        
        for (int Num: Nums)
        {
            if (Set.count(Num))
            {
                Set.erase(Num);
            }
            else
            {
                Set.insert(Num);
            }
        }
        
        return *Set.begin();
    }
};