class Solution {
public:
    int numIdenticalPairs(vector<int>& Nums) {
        map<int, int> Map;
        int PairsNum = 0;
        
        for (int i = 0; i < Nums.size(); i++)
        {
            int Num = Nums[i];
            
            if (Map.count(Num) > 0)
            {
                PairsNum += Map[Num];
                Map[Num]++;
            }
            else
            {
                Map.insert({Num, 1});
            }
        }
        
        return PairsNum;
    }
};