class Solution {
public:
    vector<int> buildArray(vector<int>& Nums) {
        vector<int> MixedNums;
        
        for (int i = 0; i < Nums.size(); i++)
        {
            MixedNums.push_back(Nums[Nums[i]]);
        }
        
        return MixedNums;
    }
};