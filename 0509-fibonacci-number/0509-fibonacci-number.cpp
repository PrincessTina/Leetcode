class Solution {
public:
    int fib(int n) {
        int Nums[3] = {0, 1, 1};
        
        for (int i = 3; i <= n; i++)
        {
            Nums[0] = Nums[1];
            Nums[1] = Nums[2];
            Nums[2] = Nums[0] + Nums[1];
        }
        
        if (n >= 3)
        {
            return Nums[2];
        }
        
        return Nums[n];
    }
};