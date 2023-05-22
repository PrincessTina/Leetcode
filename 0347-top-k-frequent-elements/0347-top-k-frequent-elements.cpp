class Solution {
public:
    vector<int> topKFrequent(vector<int>& Nums, int k) {
        set<pair<int, int>, greater<pair<int, int>>> Set;
        unordered_map<int, int> Map;
        vector<int> Result;
        
        for (int Num: Nums)
        {
            if (Map.count(Num) != 0)
            {
                Map[Num]++;
                continue;
            }
            
            Map.insert({Num, 1});
        }
        
        for (const pair<int, int>& Pair: Map)
        {
            Set.insert({Pair.second, Pair.first});
        }
        
        auto It = Set.begin();
        
        for (int i = 0; i < k; i++, It++)
        {
            Result.push_back((*It).second);
        }
        
        return Result;
    }
};