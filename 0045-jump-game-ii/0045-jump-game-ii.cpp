class Solution {
public:
    int jump(vector<int>& Nums) {
        vector<int> Jumps;
        Jumps.push_back(0);
        
        for (int i = 0; i < Nums.size(); i++)
        {
            for (int j = i + 1; j <= i + Nums[i] && j < Nums.size(); j++)
            {
                if (j >= Jumps.size())
                {
                    Jumps.push_back(Jumps[i] + 1);
                }
                
                if (Jumps.size() == Nums.size())
                {
                    break;
                }
            }
        }
        
        return Jumps[Nums.size() - 1];
    }
};