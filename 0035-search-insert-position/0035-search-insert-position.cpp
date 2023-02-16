class Solution {
public:
    int searchInsert(vector<int>& Nums, int Target) {
        int Left = 0;
        int Right = Nums.size() - 1;
        int Center = 0;
        
        while (true)
        {
            Center = (Right + Left) * 0.5;
            
            if (Nums[Center] == Target)
            {
                return Center;
            }
            
            if (Center + 1 < Nums.size() && Target >= Nums[Center + 1])
            {
                Left = Center + 1;
                continue;
            }
            
            if (Center - 1 >= 0 && Target <= Nums[Center - 1])
            {
                Right = Center - 1;
                continue;
            }
            
            if (Target < Nums[Center])
            {
                return Center;
            }
            
            return Center + 1;
        }
    }
};