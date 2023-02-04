class Solution {
public:
    bool checkInclusion(string S1, string S2) {
        unordered_map<char, int> Diff;
        
        if (S2.size() < S1.size())
        {
            return false;
        }
        
        for (char c: S1)
        {
            if (Diff.count(c) != 0)
            {
                Diff[c]++;
                continue;
            }
            
            Diff.insert({c, 1});
        }
        
        for (int i = 0; i < S1.size(); i++)
        {
            insert(Diff, S2[i], -1);
        }
        
        if (Diff.empty())
        {
            return true;
        }
        
        for (int i = 1; i < S2.size(); i++)
        {
            if (i + S1.size() - 1 >= S2.size())
            {
                break;
            }
            
            insert(Diff, S2[i - 1], 1);
            insert(Diff, S2[i + S1.size() - 1], -1);
            
            if (Diff.empty())
            {
                return true;
            }
        }
        
        return Diff.empty();
    }
    
    void insert(unordered_map<char, int>& Map, char c, int Value)
    {
        if (Map.count(c) != 0)
        {
            Map[c] += Value;

            if (Map[c] == 0)
            {
                Map.erase(c);
            }
        }
        else
        {
            Map.insert({c, Value});
        }
    }
};