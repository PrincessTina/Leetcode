class Solution {
public:
    int largestPerimeter(vector<int>& Nums) {
        sort(Nums.begin(), Nums.end());
        
        for (int i = Nums.size() - 3; i >= 0; i--)
        {
            if (Nums[i + 2] < Nums[i + 1] + Nums[i])
            {
                return Nums[i] + Nums[i + 1] + Nums[i + 2];
            }
        }
        
        return 0;
    }
};