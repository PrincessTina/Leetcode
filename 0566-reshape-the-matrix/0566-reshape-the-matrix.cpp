class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& Matrix, int Rows, int Columns) {
        int PrevColumns = Matrix[0].size();
        
        if (Matrix.size() * PrevColumns != Rows * Columns)
        {
            return Matrix;
        }
        
        vector<vector<int>> TMatrix;
        int Index = 0;
        
        for (int i = 0; i < Rows; i++)
        {
            TMatrix.push_back({});
            
            for (int j = 0; j < Columns; j++)
            {
                TMatrix[i].push_back(Matrix[Index / PrevColumns][Index % PrevColumns]);
                Index++;
            }
        }
        
        return TMatrix;
    }
};