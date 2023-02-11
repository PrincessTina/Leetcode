class Solution {
public:
    int climbStairs(int n) {
        const int MaxTwoCount = n / 2;
        long Fraction = n - 1;
        int Ways = n;
        
        for (int i = 2; i <= MaxTwoCount; i++)
        {
            Fraction = Fraction * (n - i) * (n - i - 1) / ((n - 1) * i);
            
            Ways += Fraction;
            n -= 1;
        }
        
        return Ways;
    }
};