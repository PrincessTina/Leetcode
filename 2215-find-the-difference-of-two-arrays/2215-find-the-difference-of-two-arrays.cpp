class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& Nums1, vector<int>& Nums2) {
        vector<vector<int>> Result = {{}, {}};
        unordered_set<int> Set1(Nums1.begin(), Nums1.end());
        unordered_set<int> Set2(Nums2.begin(), Nums2.end());
        
        for (int Num: Set1)
        {
            if (Set2.count(Num) == 0)
            {
                Result[0].push_back(Num);
            }
        }
        
        for (int Num: Set2)
        {
            if (Set1.count(Num) == 0)
            {
                Result[1].push_back(Num);
            }
        }
        
        return Result;
    }
};