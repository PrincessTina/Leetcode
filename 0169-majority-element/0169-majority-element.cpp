class Solution {
public:
    int majorityElement(vector<int>& Nums) {
        unordered_map<int, int> Map;
        pair<int, int> Max = {0, 0};
        
        for (int Num: Nums)
        {
            if (Map.count(Num) > 0)
            {
                Map[Num]++;
            }
            else
            {
                Map.insert({Num, 1});
            }
            
            if (Map[Num] > Max.second)
            {
                Max = {Num, Map[Num]};
            }
        }
        
        return Max.first;
    }
};