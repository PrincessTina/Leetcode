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
        const int MaxInt = 1000000007;
        int Result = 2;
        
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
            
            Result *= 2;
            
            if (Result > MaxInt)
            {
                Result %= MaxInt;
            }
            
            Current = Ranges[i];
        }
        
        return Result;
    }
};