class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& Grid) {
        int i = 0;
        int j = 0;
        
        while (i < Grid.size())
        {
            while (j < Grid[0].size())
            {
                if (Grid[i][j] == 1)
                {
                    FindIsland(Grid, i, j);
                    
                    if (Length > MaxLength)
                    {
                        MaxLength = Length;
                    }

                    Length = 0;
                }
                
                j++;
            }
            
            i++;
            j = 0;
        }
        
        return MaxLength;
    }
    
private:
    stack<pair<int, int>> Island;
    int Length = 0;
    int MaxLength = 0;
    
    void FindIsland(vector<vector<int>>& Grid, int i, int j)
    {
        if (Grid[i][j] != -1)
        {
            Grid[i][j] = -1;
            Length++;

            if (i - 1 >= 0 && Grid[i - 1][j] == 1)
            {
                Island.push({i - 1, j});
            }

            if (i + 1 < Grid.size() && Grid[i + 1][j] == 1)
            {
                Island.push({i + 1, j});
            }

            if (j - 1 >= 0 && Grid[i][j - 1] == 1)
            {
                Island.push({i, j - 1});
            }

            if (j + 1 < Grid[0].size() && Grid[i][j + 1] == 1)
            {
                Island.push({i, j + 1});
            }
        }
        
        if (!Island.empty())
        {
            pair<int, int> Part = Island.top();
            Island.pop();
            
            FindIsland(Grid, Part.first, Part.second);
        }
    }
};