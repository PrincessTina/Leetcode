class Solution {
public:
    vector<int> sortArray(vector<int>& Nums) {
        vector<int> Result(Nums.size());
        int i = Nums.size() - 1;
        
        make_heap(Nums.begin(), Nums.end());
        
        while (i >= 0)
        {
            Result[i] = Nums.front();
            
            pop_heap(Nums.begin(), Nums.end());
            Nums.pop_back();
            
            i--;
        }
        
        return Result;
    }
};