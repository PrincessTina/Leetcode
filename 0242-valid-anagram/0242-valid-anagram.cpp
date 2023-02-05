class Solution {
public:
    bool isAnagram(string S1, string S2) {
        if (S1.size() != S2.size())
        {
            return false;
        }
        
        unordered_map<char, int> Diff;
        
        for (char c: S1)
        {
            if (Diff.count(c) != 0)
            {
                Diff[c]++;
            }
            else
            {
                Diff.insert({c, 1});
            }
        }
        
        for (char c: S2)
        {
            if (Diff.count(c) == 0)
            {
                return false;
            }
            
            Diff[c]--;
            
            if (Diff[c] == 0)
            {
                Diff.erase(c);
            }
        }
        
        return Diff.empty();
    }
};