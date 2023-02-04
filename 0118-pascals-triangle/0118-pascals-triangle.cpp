class Solution {
public:
    vector<vector<int>> generate(int Rows) {
        vector<vector<int>> Matrix;
        Matrix.push_back({1});
        
        for (int i = 1; i < Rows; i++)
        {
            Matrix.push_back({1});
            
            for (int j = 1; j < i; j++)
            {
                Matrix[i].push_back(Matrix[i - 1][j - 1] + Matrix[i - 1][j]);
            }
            
            Matrix[i].push_back(1);
        }
        
        return Matrix;
    }
};