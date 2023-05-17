class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& Items1, vector<vector<int>>& Items2) {
        vector<vector<int>> Result;
        map<int, int> Map;
        
        for (const vector<int>& Pair: Items1)
        {
            Map.insert({Pair[0], Pair[1]});
        }
        
        for (const vector<int>& Pair: Items2)
        {
            if (Map.count(Pair[0]) > 0)
            {
                Map[Pair[0]] += Pair[1];
                continue;
            }
            
            Map.insert({Pair[0], Pair[1]});
        }
        
        for (const pair<int, int>& Pair: Map)
        {
            Result.push_back({Pair.first, Pair.second});
        }
        
        return Result;
    }
};