class Solution {
public:
    int firstUniqChar(string String) {
        unordered_map<char, int> Map;
        
        for (char c: String)
        {
            if (Map.count(c) != 0)
            {
                Map[c]++;
            }
            else
            {
                Map.insert({c, 1});
            }
        }
        
        for (int i = 0; i < String.size(); i++)
        {
            if (Map[String[i]] == 1)
            {
                return i;
            }
        }
        
        return -1;
    }
};