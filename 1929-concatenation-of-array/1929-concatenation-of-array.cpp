class Solution {
public:
    vector<int> getConcatenation(vector<int>& Nums) {
        vector<int> TwiceNums;
        
        for (int Num: Nums)
        {
            TwiceNums.push_back(Num);
        }
        
        for (int Num: Nums)
        {
            TwiceNums.push_back(Num);
        }
        
        return TwiceNums;
    }
};