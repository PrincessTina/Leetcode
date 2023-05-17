class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> Result(n + 1);
        
        for (int i = 0; i <= n; i++)
        {
            int Current = i;
            int Ones = 0;
            
            for (int j = 16; j >= 0; j--)
            {
                const int Degree = pow(2, j);
                if (Degree > Current)
                {
                    continue;
                }
                
                Ones++;
                
                Current -= Degree; 
                if (Current == 0)
                {
                    break;
                }
            }
            
            Result[i] = Ones;
        }
        
        return Result;
    }
};