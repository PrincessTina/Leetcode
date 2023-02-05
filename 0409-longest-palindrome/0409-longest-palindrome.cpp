class Solution {
public:
    int longestPalindrome(string String) {
        unordered_set<int> Diff;
        int PalindromLength = 0;
        
        for (char c: String)
        {
            if (Diff.count(c) != 0)
            {
                Diff.erase(c);
                PalindromLength += 2;
            }
            else
            {
                Diff.insert(c);
            }
        }
        
        if (!Diff.empty())
        {
            PalindromLength++;
        }
        
        return PalindromLength;
    }
};