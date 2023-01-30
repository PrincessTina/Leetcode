class Solution {
public:
    vector<int> twoSum(vector<int>& Nums, int Target) {
        unordered_map<int, int> Map;
        
        for (int i = 0; i < Nums.size(); i++)
        {
            int Diff = Target - Nums[i];
            
            if (Map.count(Diff) > 0)
            {
                return {i, Map.at(Diff)};
            }
            
            Map.insert({Nums[i], i});
        }
        
        return {0, 0};
    }
};