class Solution {
public:
    long long coloredCells(int n) {
        long Sum = 1;
        int Previous = 0;
        
        for (int i = 2; i <= n; i++)
        {
            Previous += 4;
            Sum += Previous;
        }
        
        return Sum;
    }
};