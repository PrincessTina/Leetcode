class Solution {
public:
    int reverse(int x) {
        long Reversed = 0;
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
            const int TenDegree = pow(10, NumbersCount - i - 1);
            Reversed += (x / TenDegree) * pow(10, i);
            x %= TenDegree;
        }
        
        if (abs(Reversed) > 2147483647)
        {
            return 0;
        }
        
        return Reversed;
    }
};