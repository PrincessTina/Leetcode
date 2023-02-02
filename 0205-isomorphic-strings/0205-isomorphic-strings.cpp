class Solution {
public:
    bool isIsomorphic(string S1, string S2) {
        if (S1.size() != S2.size())
        {
            return false;
        }
        
        unordered_map<char, char> Dictionary1;
        unordered_map<char, char> Dictionary2;
        
        for (int i = 0; i < S1.size(); i++)
        {
            if (Dictionary1.count(S1[i]) != 0)
            {
                if (Dictionary1[S1[i]] != S2[i])
                {
                    return false;
                }
            }
            else if (Dictionary2.count(S2[i]) != 0)
            {
                return false;
            }
            else
            {
                Dictionary1.insert({S1[i], S2[i]});
                Dictionary2.insert({S2[i], S1[i]});
            }
        }
        
        return true;
    }
};