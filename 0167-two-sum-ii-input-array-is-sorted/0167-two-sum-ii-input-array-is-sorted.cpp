class Solution {
public:
    vector<int> twoSum(vector<int>& Nums, int Target) {
        int Left = 0;
        int Right = Nums.size() - 1;
        
        while (true)
        {
            if (Nums[Left] + Nums[Right] == Target)
            {
                return {Left + 1, Right + 1};
            }
            
            if (Nums[Left] + Nums[Right] > Target)
            {
                Right--;
            }
            else
            {
                Left++;
            }
            
        }
    }
};