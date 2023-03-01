class Solution {
public:
    vector<vector<int>> combine(int n, int k) {
        vector<int> Array(k);
        
        Max = n;
        MakeArray(Array, 1, 0);
        MakeCombination(Array);
        
        return Result;
    }
    
private:
    vector<vector<int>> Result;
    int Max;
    
    void MakeCombination(vector<int>& Array)
    {
        while (true)
        {
            while (Array[Array.size() - 1] < Max)
            {
                Array[Array.size() - 1]++;
                Result.push_back(Array);
            }
            
            int i = Array.size() - 2;
            
            while (i >= 0 && Array[i] >= Max - Array.size() + 1 + i)
            {
                i--;
            }
            
            if (i < 0)
            {
                break;
            }
            
            MakeArray(Array, Array[i] + 1, i);
        }
    }
    
    void MakeArray(vector<int>& Array, int Value, int From)
    {
        for (int i = From; i < Array.size(); i++)
        {
            Array[i] = Value;
            Value++;
        }
        
        Result.push_back(Array);
    }
};