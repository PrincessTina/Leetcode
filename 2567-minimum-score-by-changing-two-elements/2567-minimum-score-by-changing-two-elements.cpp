class Solution {
public:
    int minimizeSum(vector<int>& Nums) {
        sort(Nums.begin(), Nums.end());
        
        int First = Nums[Nums.size() - 3] - Nums[0];
        int Second = Nums[Nums.size() - 2] - Nums[1];
        int Third = Nums[Nums.size() - 1] - Nums[2];
        
        if (First <= Second && First <= Third)
        {
            return First;
        }
        
        if (Second <= First && Second <= Third)
        {
            return Second;
        }
        
        return Third;
    }
};