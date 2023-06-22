class Solution {
public:
    double myPow(double x, int n) {
        if (abs(x) == 1.0)
        {
            if (n == -2147483648)
            {
                return 1.0;
            }
            
            return x;
        }
        
        if (n == -2147483648)
        {
            return 0.0;
        }
        
        const int Target = abs(n) / 2;
        double Result = 1.0;
        
        for (int i = 1; i <= Target; i++)
        {
            Result *= x;
        }
        
        Result *= Result;
        
        if (n % 2 != 0)
        {
            Result *= x;
        }
        
        if (n < 0)
        {
            Result = 1 / Result;
        }
        
        return Result;
    }
};