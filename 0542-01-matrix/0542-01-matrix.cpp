class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& Matrix) {
        vector<vector<int>> Result(Matrix.size(), vector<int>(Matrix[0].size(), -1));
        
        for (int i = 0; i < Matrix.size(); i++)
        {
            for (int j = 0; j < Matrix[0].size(); j++)
            {
                if (Matrix[i][j] == 0)
                {
                    FillField(Matrix, Result, i, j, 0);
                    break;
                }
            }
        }
        
        return Result;
    }
    
private:
    void FillField(vector<vector<int>>& Matrix, vector<vector<int>>& Result, int i, int j, int Count)
    {
        if (Result[i][j] == -1)
        {
            if (Matrix[i][j] == 0)
            {
                Count = 0;
            }
        }
        else if (Result[i][j] < Count)
        {
            return;
        }
        
        Result[i][j] = Count;
        
        if (i - 1 >= 0)
        {
            FillField(Matrix, Result, i - 1, j, Count + 1);
        }
        
        if (i + 1 < Result.size())
        {
            FillField(Matrix, Result, i + 1, j, Count + 1);
        }
        
        if (j - 1 >= 0)
        {
            FillField(Matrix, Result, i, j - 1, Count + 1);
        }
        
        if (j + 1 < Result[0].size())
        {
            FillField(Matrix, Result, i, j + 1, Count + 1);
        }
    }
    
    /*
    1 1 1
    1 1 1
    1 1 0
    
    4 3 2
    3 2 1
    2 1 0
    
    -1 -1 -1
    -1 -1 -1
    -1 -1 -1
    
    */
};