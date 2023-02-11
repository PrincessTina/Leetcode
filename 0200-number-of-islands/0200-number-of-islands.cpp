class Solution {
public:
    int numIslands(vector<vector<char>>& Grid) {
        int i = 0;
        int j = 0;
        
        while (i < Grid.size())
        {
            if (Grid[i][j] != '1')
            {
                if (j + 1 < Grid[0].size())
                {
                    j++;
                    continue;
                }
                
                j = 0;
                i++;
                continue;
            }
            
            Stack.push({i, j});
            FormIsland(Grid, i, j);
            
            i = 0;
            j = 0;
        }
        
        return IslandsCount;
    }
    
private:
    stack<pair<int, int>> Stack;
    int IslandsCount = 0;
    
    void FormIsland(vector<vector<char>>& Grid, int i, int j)
    {
        Grid[i][j] = '-';
        Stack.pop();
        
        if (i - 1 >= 0 && Grid[i - 1][j] == '1')
        {
            Stack.push({i - 1, j});
        }
        
        if (i + 1 < Grid.size() && Grid[i + 1][j] == '1')
        {
            Stack.push({i + 1, j});
        }
        
        if (j - 1 >= 0 && Grid[i][j - 1] == '1')
        {
            Stack.push({i, j - 1});
        }
        
        if (j + 1 < Grid[0].size() && Grid[i][j + 1] == '1')
        {
            Stack.push({i, j + 1});
        }
        
        if (Stack.empty())
        {
            IslandsCount++;
            return;
        }
        
        FormIsland(Grid, Stack.top().first, Stack.top().second);
    }
};