class Solution {
public:
    int minimumTotal(vector<vector<int>>& Triangle) {
        int MinPath = 10000;
        
        for (int i = 0; i < Triangle.size(); i++)
        {
            for (int j = 0; j < Triangle[i].size(); j++)
            {
                if (i - 1 >= 0)
                {
                    if (j == 0)
                    {
                        Triangle[i][j] += Triangle[i - 1][j];
                    }
                    else if (j == Triangle[i - 1].size())
                    {
                        Triangle[i][j] += Triangle[i - 1][j - 1];
                    }
                    else
                    {
                        if (Triangle[i - 1][j] < Triangle[i - 1][j - 1])
                        {
                            Triangle[i][j] += Triangle[i - 1][j];
                        }
                        else
                        {
                            Triangle[i][j] += Triangle[i - 1][j - 1];
                        }
                    }
                }
                
                if (i == Triangle.size() - 1 && Triangle[i][j] < MinPath)
                {
                    MinPath = Triangle[i][j];
                }
            }
        }
        
        return MinPath;
    }
    
    /*
        2
       5 6
     11 10 13
    15 11 18 16
    
    Matrix[i][j] = Min(Matrix[i - 1][j - 1], Matrix[i - 1][j]);
    */
};