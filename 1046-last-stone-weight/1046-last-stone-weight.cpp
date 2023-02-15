class Solution {
public:
    int lastStoneWeight(vector<int>& Stones) {
        make_heap(Stones.begin(), Stones.end());
        
        while (Stones.size() > 1)
        {
            int Stone1 = Stones.front();
            int Stone2 = 0;

            pop_heap(Stones.begin(), Stones.end());
            Stones.pop_back();

            Stone2 = Stones.front();

            pop_heap(Stones.begin(), Stones.end());
            Stones.pop_back();

            if (Stone1 != Stone2)
            {
                Stones.push_back(Stone1 - Stone2);
                push_heap(Stones.begin(), Stones.end());
            }
        }
        
        if (!Stones.empty())
        {
            return Stones.front();
        }
        
        return 0;
    }
};