class Solution {
public:
    int arraySign(vector<int>& Nums) {
        long Product = 1;
        
        for (int Num: Nums)
        {
            if (Num == 0)
            {
                return 0;
            }
            
            if (Num < 0)
            {
                Product *= -1;
            }
        }
        
        return Product > 0 ? 1 : -1;
    }
};