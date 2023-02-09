class Solution {
public:
    vector<int> sortByBits(vector<int>& Nums) {
        vector<pair<int, int>> Pairs;
        
        for (int Num: Nums)
        {
            int OnesCount = 0;
            Pairs.push_back({Num, 0});
            
            while (Num != 0)
            {
                if (Num % 2 == 1)
                {
                    OnesCount++;
                }
                
                Num /= 2;
            }
            
            Pairs[Pairs.size() - 1].second = OnesCount;
        }
        
        sort(Pairs.begin(), Pairs.end(), [](const pair<int, int> Pair1, const pair<int, int> Pair2) 
        {
            if (Pair1.second == Pair2.second)
            {
                return Pair1.first < Pair2.first;
            }
            
            return Pair1.second < Pair2.second;
        });
        
        for (int i = 0; i < Nums.size(); i++)
        {
            Nums[i] = Pairs[i].first;
        }
        
        return Nums;
    }
};