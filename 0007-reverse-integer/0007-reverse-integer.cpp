class Solution {
public:
    int reverse(int x) {
        int Reversed = 0;
        int NumbersCount = to_string(x).size();
        
        if (x == 0)
        {
            return x;
        }
        
        if (x < 0)
        {
            NumbersCount--;
        }
        
        for (int i = 0; i < NumbersCount; i++)
        {
            int TenDegree = pow(10, NumbersCount - i - 1);
            long Addition = (x / TenDegree) * pow(10, i);
            
            if (abs(Reversed + Addition) > 2147483647)
            {
                return 0;
            }
            
            Reversed += Addition;
            x %= TenDegree;
        }
        
        return Reversed;
    }
};