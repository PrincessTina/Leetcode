class Solution {
public:
    int singleNonDuplicate(vector<int>& Nums) {
        int Left = 0;
        int Right = Nums.size() - 1;
        
        while (true)
        {
            const int Center = (Left + Right) * 0.5;
            
            if (Center - 1 >= 0 && Nums[Center] == Nums[Center - 1])
            {
                if ((Center - Left + 1) % 2 != 0)
                {
                    Right = Center - 2;
                    continue;
                }
                
                Left = Center + 1;
                continue;
            }
            
            if (Center + 1 < Nums.size() && Nums[Center] == Nums[Center + 1])
            {
                if ((Right - Center + 1) % 2 != 0)
                {
                    Left = Center + 2;
                    continue;
                }
                
                Right = Center - 1;
                continue;
            }
            
            return Nums[Center];
        }
    }
};