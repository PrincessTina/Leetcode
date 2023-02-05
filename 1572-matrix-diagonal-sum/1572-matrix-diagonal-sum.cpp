class Solution {
public:
    int diagonalSum(vector<vector<int>>& Matrix) {
        int Sum = 0;
        int n =  Matrix.size();
        
        for (int i = 0; i < n; i++)
        {
            Sum += Matrix[i][i];
            Sum += Matrix[n - i - 1][i];
        }
        
        if (n % 2 != 0)
        {
            Sum -= Matrix[n * 0.5][n * 0.5];
        }
        
        return Sum;
    }
};