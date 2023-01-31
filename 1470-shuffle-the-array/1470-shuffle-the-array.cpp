class Solution {
public:
    vector<int> shuffle(vector<int>& Nums, int n) {
        vector<int> Shuffle;
        
        for (int i = 0; i < n; i++)
        {
            Shuffle.push_back(Nums[i]);
            Shuffle.push_back(Nums[i + n]);
        }
        
        return Shuffle;
    }
};