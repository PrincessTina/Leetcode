class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& Matrix, int k) 
    {
        vector<int> Result;
        vector<pair<int, int>> Map;
        
        for (int i = 0; i < Matrix.size(); i++)
        {
            int SoldiersCount = 0;
            
            for (int j = 0; j < Matrix[i].size(); j++)
            {
                if (Matrix[i][j] == 1)
                {
                    SoldiersCount += 1;
                }
                else
                {
                    break;
                }
            }
            
            Map.push_back({i, SoldiersCount});
        }
        
        sort(Map.begin(), Map.end(), [](pair<int, int> Value1, pair<int, int> Value2) 
        {
            if (Value1.second == Value2.second)
            {
                return Value1.first < Value2.first;
            }
            
            return Value1.second < Value2.second;
        });
        
        for (int i = 0; i < k; i++)
        {
            Result.push_back(Map[i].first);
        }
        
        return Result;
    }
};