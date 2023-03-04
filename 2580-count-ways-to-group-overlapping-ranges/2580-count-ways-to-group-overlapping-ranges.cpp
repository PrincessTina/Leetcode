class Solution {
public:
    int countWays(vector<vector<int>>& Ranges) {
        sort(Ranges.begin(), Ranges.end(), [](vector<int>& Vector1, vector<int>& Vector2)
        {
            if (Vector1[0] == Vector2[0])
            {
                return Vector1[1] < Vector2[1];
            }
            
            return Vector1[0] < Vector2[0];
        });
        
        vector<int> Current = Ranges[0];
        int MaxInt = 1000000007;
        double n = 1;
        
        for (int i = 1; i < Ranges.size(); i++)
        {
            if (Ranges[i][0] <= Current[1])
            {
                if (Ranges[i][1] > Current[1])
                {
                    Current[1] = Ranges[i][1];
                }
                
                continue;
            }
            
            Current = Ranges[i];
            n++;
        }
        
        int Sum = 0;
        int Result = 1;
        
        for (int i = 0; i < n; i++)
        {
            Result *= 2;
            
            if (Result > MaxInt)
            {
                Result %= MaxInt;
            }
        }
        
        return Result;
    }
};