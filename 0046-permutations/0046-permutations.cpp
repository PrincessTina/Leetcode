class Solution {
public:
    vector<vector<int>> permute(vector<int>& Nums) {
        unordered_set<int> AllNums;
        
        for (int Num: Nums)
        {
            AllNums.insert(Num);
        }
        
        MakeArray({}, AllNums);
        return Result;
    }
    
private:
    vector<vector<int>> Result;
    
    void MakeArray(vector<int> ResultArray, unordered_set<int> AvailableNums)
    {
        if (AvailableNums.size() == 0)
        {
            Result.push_back(ResultArray);
            return;
        }
        
        for (int Num: AvailableNums)
        {
            vector<int> Array = ResultArray;
            unordered_set<int> Set = AvailableNums;
            
            Array.push_back(Num);
            Set.erase(Num);
            
            MakeArray(Array, Set);
        }
    }
    
    /* 1 2 3 4
           | | 
       1 2 3 4
       1 3 2 4
       1 4 2 3
       1 4 3 2
    */
};