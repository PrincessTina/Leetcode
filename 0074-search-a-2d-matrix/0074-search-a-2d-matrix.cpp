class Solution {
public:
    bool searchMatrix(vector<vector<int>>& Matrix, int Target) {
        int LowBorder = 0;
        int HighBorder = Matrix.size() - 1;
        int Center;
        
        while (LowBorder != HighBorder && HighBorder > 0)
        {
            Center = (LowBorder + HighBorder) / 2;
            
            if (Target < Matrix[Center][0])
            {
                HighBorder = Center - 1;
                continue;
            }
            
            if (Target >= Matrix[Center + 1][0])
            {
                LowBorder = Center + 1;
                continue;
            }
            
            LowBorder = HighBorder = Center;
        }
        
        int Row = LowBorder;
        int LeftBorder = 0;
        int RightBorder = Matrix[0].size() - 1;
        
        while (LeftBorder != RightBorder && RightBorder > 0)
        {
            Center = (LeftBorder + RightBorder) / 2;
            
            if (Target < Matrix[Row][Center])
            {
                RightBorder = Center - 1;
                continue;
            }
            
            if (Target >= Matrix[Row][Center + 1])
            {
                LeftBorder = Center + 1;
                continue;
            }
            
            return Matrix[Row][Center] == Target;
        }
        
        return Matrix[Row][LeftBorder] == Target;
    }
};