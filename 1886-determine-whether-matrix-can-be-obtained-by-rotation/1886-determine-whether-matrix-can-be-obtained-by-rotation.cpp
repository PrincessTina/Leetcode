class Solution {
public:
    bool findRotation(vector<vector<int>>& Matrix, vector<vector<int>>& Target) {
        vector<vector<int>> RMatrix = Matrix;
        
        for (int n = 0; n < 4; n++)
        {
            for (int j = 0; j < RMatrix.size(); j++)
            {
                for (int i = 0; i < RMatrix[0].size(); i++)
                {
                    RMatrix[i][j] = Matrix[j][Matrix[0].size() - i - 1];
                }
            }
            
            if (Target == RMatrix)
            {
                return true;
            }
            
            Matrix = RMatrix;
        }
        
        return false;
        
        
        /*
        0 1
        1 1
        
        1 1
        0 1
        
        1 1
        1 0
        
        1 0
        1 1
        
        
        0 1
        1 0
        
        1 0
        0 1
        
        0 1
        1 0
        
        1 0
        0 1
        
        
        0 0 0
        0 1 0
        1 1 1
        
        0 0 1
        0 1 1
        0 0 1
        
        1 1 1
        0 1 0
        0 0 0
        
        1 0 0
        1 1 0
        1 0 0
        
        
        1 0
        0 1
        1 0
        
        0 1 0
        1 0 1
        */ 
    }
};