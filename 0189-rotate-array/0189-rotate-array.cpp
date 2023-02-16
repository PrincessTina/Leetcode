class Solution {
public:
    void rotate(vector<int>& Nums, int k) {
        if (Nums.size() == 1)
        {
            return;
        }
        
        while (Nums.size() < k)
        {
            k -= Nums.size();
        }
        
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
        
        
        /*for (int i = Nums.size() - k; i < Nums.size(); i++)
        {
            Nums[i - k - 1] = Nums[i];
        }*/
        
        /* 
        1 2 3 4 4 4 5 6 7
        5 6 7 1 2 3 4 4 4
        
        1 2 3 4 4 5 6 7
        5 6 7 1 2 3 4 4
        
        1 2 3 4 5 6 7
        5     1     4
        */
    }
};