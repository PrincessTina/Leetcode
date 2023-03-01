class Solution {
public:
    int singleNumber(vector<int>& Nums) {
        int Result = 0;
        
        for (int Num: Nums)
        {
            Result = Result xor Num;
        }
        
        return Result;
    }
};