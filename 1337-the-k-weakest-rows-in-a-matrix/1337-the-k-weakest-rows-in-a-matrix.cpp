class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& Matrix, int k) 
    {
        // vector<int> Values;
        // vector<int> Indexes;
        // vector<int> Result;
        vector<pair<int, int>> Map;
        vector<int> Result;
        
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
            //Insert(SoldiersCount, i, Values, Indexes);
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
    
private:
    void Insert(int Value, int Index, vector<int>& Values, vector<int>& Indexes)
    {
        if (Values.empty())
        {
            Values.push_back(Value);
            Indexes.push_back(Index);
            
            return;
        }
        
        for (int i = Values.size() - 1; i >= 0; i--)
        {
            if (Value > Values[i])
            {
                if (i == Values.size() - 1)
                {
                    Values.push_back(Value);
                    Indexes.push_back(Index);
                }
                else
                {
                    Values.emplace(Values.begin() + i + 1, Value);
                    Indexes.emplace(Indexes.begin() + i + 1, Index);
                }
                
                break;
            }
            
            if (Value == Values[i])
            {
                if (Index > Indexes[i])
                {
                    if (i == Values.size() - 1)
                    {
                        Values.push_back(Value);
                        Indexes.push_back(Index);
                    }
                    else
                    {
                        Values.emplace(Values.begin() + i + 1, Value);
                        Indexes.emplace(Indexes.begin() + i + 1, Index);
                    }
                }
                else
                {
                    Values.emplace(Values.begin() + i, Value);
                    Indexes.emplace(Indexes.begin() + i, Index);
                }
                
                break;
            }
            
            if (i == 0)
            {
                Values.emplace(Values.begin(), Value);
                Indexes.emplace(Indexes.begin(), Index);
            }
        }
    }
};