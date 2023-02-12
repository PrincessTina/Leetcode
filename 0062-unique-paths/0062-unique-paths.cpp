class Solution {
public:
    int uniquePaths(int m, int n) {
        int Result = 0;
        
        if (m == 1 || n == 1)
        {
            return 1;
        }
        
        for (int i = 1; i <= m; i++)
        {
            Result += Get(i, n - 1);
        }
        
        return Result;
    }
    
private:
    int Values[100][100];
    
    int Get(int i, int j)
    {
        if (j < i)
        {
            const int t = j;
            j = i;
            i = t;
        }
        
        if (i == 1)
        {
            return 1;
        }
        
        if (i == 2)
        {
            return j;
        }
        
        if (Values[i][j] != 0)
        {
            return Values[i][j];
        }
        
        int Value = 0;
        
        if (i == 3)
        {
            for (int k = 1; k <= j; k++)
            {
                Value += k;
            }
            
            Values[i][j] = Value;
            return Value;
        }
        
        for (int k = 1; k <= j; k++)
        {
            Value += Get(k, i - 1);
        }
        
        Values[i][j] = Value;
        return Value;
    }
};