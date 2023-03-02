class Solution {
public:
    bool isMonotonic(vector<int>& Nums) {
        int i = 0;
        
        while (true)
        {
            if (i + 1 >= Nums.size())
            {
                return true;
            }
            
            if (Nums[i] != Nums[i + 1])
            {
                break;
            }
            
            i++;
        }
        
        const bool IsIncreasing = Nums[i + 1] > Nums[i]; 
        
        for (int j = i + 2; j < Nums.size(); j++)
        {
            if (IsIncreasing && Nums[j] < Nums[j - 1])
            {
                return false;
            }
            
            if (!IsIncreasing && Nums[j] > Nums[j - 1])
            {
                return false;
            }
        }
        
        return true;
    }
};