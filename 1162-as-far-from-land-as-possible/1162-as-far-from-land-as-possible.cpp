class Solution {
public:
    int maxDistance(vector<vector<int>>& Grid) {
        vector<vector<int>> Field(Grid.size(), vector<int>(Grid[0].size()));
        vector<pair<int, int>> Digits;
        vector<pair<int, int>> Temp;
        int OnesCount = 0;
        
        for (int i = 0; i < Grid.size(); i++)
        {
            for (int j = 0; j < Grid[0].size(); j++)
            {
                if (Grid[i][j] == 1)
                {
                    if (i - 1 >= 0)
                    {
                        Field[i - 1][j] = 1;
                        Digits.push_back({i - 1, j});
                    }
                    
                    if (i + 1 < Grid.size())
                    {
                        Field[i + 1][j] = 1;
                        Digits.push_back({i + 1, j});
                    }
                    
                    if (j - 1 >= 0)
                    {
                        Field[i][j - 1] = 1;
                        Digits.push_back({i, j - 1});
                    }
                    
                    if (j + 1 < Grid[0].size())
                    {
                        Field[i][j + 1] = 1;
                        Digits.push_back({i, j + 1});
                    }
                    
                    OnesCount++;
                }
            }
        }
        
        if (OnesCount == 0 || OnesCount == Grid.size() * Grid[0].size())
        {
            return -1;
        }
        
        while (true)
        {
            for (pair<int, int> Digit: Digits)
            {
                FillField(Field, Digit.first, Digit.second, Temp);
            }
            
            if (Temp.empty())
            {
                break;
            }
            
            Digits = Temp;
            Temp.clear();
        }
        
        return MaxValue - 1;
    }
    
private:
    int MaxValue = 0;
    
    void FillField(vector<vector<int>>& Field, int i, int j, vector<pair<int, int>>& Temp)
    {
        int Value = Field[i][j] + 1;
        
        if (Value > MaxValue)
        {
            MaxValue = Value;
        }
        
        if (i - 1 >= 0 && Field[i - 1][j] == 0)
        {
            Field[i - 1][j] = Value;
            Temp.push_back({i - 1, j});
        }

        if (i + 1 < Field.size() && Field[i + 1][j] == 0)
        {
            Field[i + 1][j] = Value;
            Temp.push_back({i + 1, j});
        }

        if (j - 1 >= 0 && Field[i][j - 1] == 0)
        {
            Field[i][j - 1] = Value;
            Temp.push_back({i, j - 1});
        }

        if (j + 1 < Field[0].size() && Field[i][j + 1] == 0)
        {
            Field[i][j + 1] = Value;
            Temp.push_back({i, j + 1});
        }
    }
};