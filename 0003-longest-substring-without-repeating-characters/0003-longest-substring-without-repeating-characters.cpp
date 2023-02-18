class Solution {
public:
    int lengthOfLongestSubstring(string String) {
        unordered_map<char, int> Map;
        int Max = 0;
        int i = 0;
        
        while (i < String.size())
        {
            if (Map.count(String[i]) == 0)
            {
                Map.insert({String[i], i});
                i++;
                continue;
            }
            
            if (Map.size() > Max)
            {
                Max = Map.size();
            }
            
            i = Map[String[i]] + 1;
            Map.clear();
        }
        
        if (Map.size() > Max)
        {
            Max = Map.size();
        }
        
        return Max;
    }
};