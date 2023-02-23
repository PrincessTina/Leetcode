class Solution {
public:
    int orangesRotting(vector<vector<int>>& Grid) {
        vector<vector<int>> Result(Grid.size(), vector<int>(Grid[0].size(), -1));
        int Minutes = 0;
        
        for (int i = 0; i < Grid.size(); i++)
        {
            for (int j = 0; j < Grid[0].size(); j++)
            {
                if (Grid[i][j] == 2)
                {
                    Rot(Grid, Result, i, j, 0);
                }
            }
        }
        
        for (int i = 0; i < Grid.size(); i++)
        {
            for (int j = 0; j < Grid[0].size(); j++)
            {
                if (Grid[i][j] == 1 && Result[i][j] == -1)
                {
                    return -1;
                }
                
                if (Result[i][j] > Minutes)
                {
                    Minutes = Result[i][j];
                }
            }
        }
        
        return Minutes;
    }
    
private:
    void Rot(vector<vector<int>>& Grid, vector<vector<int>>& Result, int i, int j, int Minute)
    {
        if (Grid[i][j] == 0)
        {
            return;
        }
        
        if (Result[i][j] == -1)
        {
            if (Grid[i][j] == 2)
            {
                Minute = 0;
            }
        }
        else if (Result[i][j] < Minute)
        {
            return;
        }
        
        Result[i][j] = Minute;
        
        if (i - 1 >= 0)
        {
            Rot(Grid, Result, i - 1, j, Minute + 1);
        }
        
        if (i + 1 < Grid.size())
        {
            Rot(Grid, Result, i + 1, j, Minute + 1);
        }
        
        if (j - 1 >= 0)
        {
            Rot(Grid, Result, i, j - 1, Minute + 1);
        }
        
        if (j + 1 < Grid[0].size())
        {
            Rot(Grid, Result, i, j + 1, Minute + 1);
        }
    }
};