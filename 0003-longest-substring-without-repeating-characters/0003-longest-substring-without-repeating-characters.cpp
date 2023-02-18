class Solution {
public:
    int lengthOfLongestSubstring(string String) {
        unordered_set<char> Set;
        int Max = 0;
        int Left = 0;
        int Right = 0;
        
        while (Right < String.size())
        {
            if (Set.count(String[Right]) == 0)
            {
                Set.insert(String[Right]);
                Right++;
                continue;
            }
            
            if (Set.size() > Max)
            {
                Max = Set.size();
            }
            
            while (String[Left] != String[Right])
            {
                Set.erase(String[Left]);
                Left++;
            }
            
            Right++;
            Left++;
        }
        
        if (Set.size() > Max)
        {
            Max = Set.size();
        }
        
        return Max;
    }
};