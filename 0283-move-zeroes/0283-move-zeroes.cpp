class Solution {
public:
    void moveZeroes(vector<int>& Nums) {
        int ZeroIndex = 0;
        int NumIndex = 0;
        
        while (true)
        {
            while (ZeroIndex < Nums.size() && Nums[ZeroIndex] != 0)
            {
                ZeroIndex++;
            }
            
            NumIndex = ZeroIndex;
            
            while (NumIndex < Nums.size() && Nums[NumIndex] == 0)
            {
                NumIndex++;
            }
            
            if (NumIndex >= Nums.size() || ZeroIndex >= Nums.size())
            {
                break;
            }
            
            Nums[ZeroIndex] = Nums[NumIndex];
            Nums[NumIndex] = 0;
        }
    }
};