class Solution {
public:
    void rotate(vector<int>& Nums, int k) {
        if (Nums.size() == 1)
        {
            return;
        }
        
        k %= Nums.size();
        
        vector<int> Temp(Nums.size() - k);
        
        for (int i = 0; i < Temp.size(); i++)
        {
            Temp[i] = Nums[i];
        }
        
        for (int i = 0; i < k; i++)
        {
            Nums[i] = Nums[Nums.size() - (k - i)];
        }
        
        for (int i = 0; i < Temp.size(); i++)
        {
            Nums[k + i] = Temp[i];
        }
    }
};