class Solution {
public:
    double findMaxAverage(vector<int>& Nums, int k) {
        int MaxSum = 0;
        int Sum = 0;
        
        for (int i = 0; i < k; i++)
        {
            Sum += Nums[i];
        }
        
        MaxSum = Sum;
        
        for (int i = 1; i <= Nums.size() - k; i++)
        {
            Sum += Nums[i + k - 1] - Nums[i - 1];
            
            if (Sum > MaxSum)
            {
                MaxSum = Sum;
            }
        }
        
        return (double) MaxSum / k;
    }
};