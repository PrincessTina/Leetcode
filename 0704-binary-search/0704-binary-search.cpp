class Solution {
public:
    int search(vector<int>& Nums, int Target) {
        int LeftBorder = 0;
        int RightBorder = Nums.size() - 1;
        int Center;
        
        while (LeftBorder != RightBorder && RightBorder >= 0)
        {
            Center = (LeftBorder + RightBorder) * 0.5;
            
            if (Target < Nums[Center])
            {
                RightBorder = Center - 1;
                continue;
            }
            
            if (Target >= Nums[Center + 1])
            {
                LeftBorder = Center + 1;
                continue;
            }
            
            return Target == Nums[Center] ? Center : -1;
        }
        
        return Target == Nums[LeftBorder] ? LeftBorder : -1;
    }
};