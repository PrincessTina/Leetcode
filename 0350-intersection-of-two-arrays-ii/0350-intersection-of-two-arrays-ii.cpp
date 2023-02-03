class Solution {
public:
    vector<int> intersect(vector<int>& Nums1, vector<int>& Nums2) {
        unordered_map<int, int> Map;
        vector<int> Result;
        
        for (int Num: Nums1)
        {
            if (Map.count(Num) != 0)
            {
                Map[Num]++;
            }
            else
            {
                Map.insert({Num, 1});
            }
        }
        
        for (int Num: Nums2)
        {
            if (Map.count(Num) != 0)
            {
                Result.push_back(Num);
                Map[Num]--;
                
                if (Map[Num] == 0)
                {
                    Map.erase(Num);
                }
            }
        }
        
        return Result;
    }
};