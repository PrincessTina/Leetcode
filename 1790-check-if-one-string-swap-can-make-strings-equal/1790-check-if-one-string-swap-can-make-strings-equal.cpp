class Solution {
public:
    bool areAlmostEqual(string S1, string S2) {
        if (S1 == S2)
        {
            return true;
        }
        
        unordered_map<char, char> Swaps;
        bool IsSwapAvailable = true;
        
        for (int i = 0; i < S1.size(); i++)
        {
            if (S1[i] == S2[i])
            {
                continue;
            }
            
            if (!IsSwapAvailable)
            {
                return false;
            }
            
            if (Swaps.empty())
            {
                Swaps.insert({S1[i], S2[i]});
                continue;
            }
            
            if (Swaps.count(S2[i]) > 0 && Swaps[S2[i]] == S1[i])
            {
                Swaps.erase(S2[i]);
                IsSwapAvailable = false;
                continue;
            }
            
            return false;
        }
        
        return Swaps.empty();
    }
};