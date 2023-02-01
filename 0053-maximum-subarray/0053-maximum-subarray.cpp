class Solution {
public:
    int maxSubArray(vector<int>& Nums) {
        int MaxSum = Nums[0];
        int Sum = Nums[0];
        
        for (int i = 1; i < Nums.size(); i++)
        {
            if (Sum < 0 && Sum < Nums[i])
            {
                Sum = Nums[i];
            }
            else
            {
                Sum += Nums[i];
            }
            
            if (Sum > MaxSum)
            {
                MaxSum = Sum;
            }
        }
        
        return MaxSum;
    }
};