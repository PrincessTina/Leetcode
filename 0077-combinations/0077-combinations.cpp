class Solution {
public:
    vector<vector<int>> combine(int n, int k) {
        vector<int> Array(k);
        MakeArray(Array, 0, 1);
        
        int i = Array.size() - 1;
        
        while (i >= 0)
        {
            if (Array[i] < n - Array.size() + 1 + i)
            {
                MakeArray(Array, i, Array[i] + 1);
                i = Array.size() - 1;
                continue;
            }
            
            i--;
        }
        
        return Result;
    }
    
private:
    vector<vector<int>> Result;
    
    void MakeArray(vector<int>& Array, int From, int Value)
    {
        for (int i = From; i < Array.size(); i++)
        {
            Array[i] = Value;
            Value++;
        }
        
        Result.push_back(Array);
    }
};