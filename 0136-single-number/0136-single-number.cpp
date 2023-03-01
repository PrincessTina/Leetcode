class Solution {
public:
    int singleNumber(vector<int>& Nums) {
        int Result = 0;
        
        for (int Num: Nums)
        {
            Result = Result xor Num;
        }
        
        return Result;
        
        /*unordered_set<int> Set;
        
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
        
        return *Set.begin();*/
    }
};