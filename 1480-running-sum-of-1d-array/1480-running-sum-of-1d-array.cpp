class Solution {
public:
    vector<int> runningSum(vector<int>& Nums) {
        vector<int> RunningSum;
        
        RunningSum.push_back(Nums[0]);
        
        for (int i = 1; i < Nums.size(); i++)
        {
            RunningSum.push_back(RunningSum[i - 1] + Nums[i]);
        }
        
        return RunningSum;
    }
};