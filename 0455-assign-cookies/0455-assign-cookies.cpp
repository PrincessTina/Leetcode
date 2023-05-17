class Solution {
public:
    // 7,8,9,10 - 5,6,7,8
    int findContentChildren(vector<int>& Greed, vector<int>& Sizes) {
        sort(Greed.begin(), Greed.end());
        sort(Sizes.begin(), Sizes.end());
        
        int Count = 0;
        int g = 0;
        int s = 0;
        
        while (g < Greed.size() && s < Sizes.size())
        {
            if (Sizes[s] >= Greed[g])
            {
                g++;
                s++;
                Count++;
                continue;
            }
            
            s++;
        }
        
        return Count;
    }
};