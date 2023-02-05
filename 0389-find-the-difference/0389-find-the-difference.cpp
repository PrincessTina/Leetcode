class Solution {
public:
    char findTheDifference(string S1, string S2) {
        unordered_map<char, int> Diff;
        
        for (char c: S1)
        {
            if (Diff.count(c) != 0)
            {
                Diff[c]++;
                continue;
            }
            
            Diff.insert({c, 1});
        }
        
        for (char c: S2)
        {
            if (Diff.count(c) != 0)
            {
                Diff[c]--;
                
                if (Diff[c] == 0)
                {
                    Diff.erase(c);
                }
            }
            else
            {
                Diff.insert({c, 1});
            }
        }
        
        return Diff.begin()->first;
    }
};