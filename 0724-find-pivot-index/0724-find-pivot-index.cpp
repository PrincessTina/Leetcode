class Solution {
public:
    int pivotIndex(vector<int>& Nums) {
        int Pivot = 0;
        int LeftSum = 0;
        int RightSum = 0;
        
        for (int i = 1; i < Nums.size(); i++)
        {
            RightSum += Nums[i];
        }
        
        while (Pivot + 1 < Nums.size())
        {
            if (LeftSum == RightSum)
            {
                return Pivot;
            }
            
            LeftSum += Nums[Pivot];
            RightSum -= Nums[Pivot + 1];
            Pivot++;
        }
        
        if (LeftSum == RightSum)
        {
            return Pivot;
        }
        
        return -1;
    }
};