class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& Nums) {
        int Sum = 0;
        
        for (int i = 0; i < Nums.size(); i++)
        {
            int PrevLength = 1;
            int CurrentSum = Nums[i];
            Sum += CurrentSum;
            
            while (i + PrevLength + 2 <= Nums.size())
            {
                for (int j = i + PrevLength; j < i + PrevLength + 2; j++)
                {
                    CurrentSum += Nums[j];
                }
                
                Sum += CurrentSum;
                PrevLength += 2;
            }
        }
        
        return Sum;
    }
};