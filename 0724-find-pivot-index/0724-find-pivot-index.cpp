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
        
        /*int LeftIndex = 0;
        int RightIndex = Nums.size() - 1;
        int LeftSum = Nums[LeftIndex];
        int RightSum = Nums[RightIndex];
        
        while (LeftIndex != RightIndex)
        {
            if (RightIndex < LeftIndex)
            {
                return -1;
            }
            
            if (abs(LeftSum) < abs(RightSum))
            {
                LeftIndex++;
                LeftSum += Nums[LeftIndex];
                
                continue;
            }
            
            if (abs(RightSum) < abs(LeftSum))
            {
                RightIndex--;
                RightSum += Nums[RightIndex];
                
                continue;
            }
            
            if (abs(LeftSum) == abs(RightSum))
            {
                LeftIndex++;
                RightIndex--;
                
                LeftSum += Nums[LeftIndex];
                RightSum += Nums[RightIndex];
            }
        }
        
        if (LeftSum == RightSum)
        {
            return LeftIndex;
        }
        
        if (LeftSum + RightSum == 0)
        {
            return 0;
        }
        
        return -1;*/
    }
};