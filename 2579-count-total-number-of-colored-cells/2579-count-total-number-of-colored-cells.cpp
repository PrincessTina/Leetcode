class Solution {
public:
    long long coloredCells(int n) {
        long long Sum = 1;
        long long Previous = 0;
        
        for (int i = 2; i <= n; i++)
        {
            Previous += 4;
            Sum += Previous;
        }
        
        return Sum;
    }
};