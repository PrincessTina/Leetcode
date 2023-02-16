class Solution {
public:
    vector<int> sortedSquares(vector<int>& Nums) {
        int Left = 0;
        int Right = Nums.size() - 1;
        vector<int> Result(Nums.size());
        
        for (int i = Nums.size() - 1; i >= 0; i--)
        {
            if (abs(Nums[Right]) > abs(Nums[Left]))
            {
                Result[i] = pow(Nums[Right], 2);
                Right--;
            }
            else
            {
                Result[i] = pow(Nums[Left], 2);
                Left++;
            }
        }
        
        return Result;
    }
};