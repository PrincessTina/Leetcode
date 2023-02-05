class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& Board) {
        unordered_set<char> Row;
        unordered_set<char> Column;
        vector<unordered_set<char>> Cubes = {{}, {}, {}, {}, {}, {}, {}, {}, {}};
        
        for (int i = 0; i < Board.size(); i++)
        {
            for (int j = 0; j < Board.size(); j++)
            {
                if (Board[i][j] != '.')
                {
                    const int CubeIndex = 3 * (i / 3) + (j / 3);
                    
                    if (Cubes[CubeIndex].count(Board[i][j]) != 0)
                    {
                        return false;
                    }
                    
                    if (Row.count(Board[i][j]) != 0)
                    {
                        return false;
                    }
                    
                    Cubes[CubeIndex].insert(Board[i][j]);
                    Row.insert(Board[i][j]);
                }
                
                if (Board[j][i] != '.')
                {
                    if (Column.count(Board[j][i]) != 0)
                    {
                        return false;
                    }
                
                    Column.insert(Board[j][i]);
                }
            }
            
            Row.clear();
            Column.clear();
        }
        
        return true;
    }
};