class Solution {
public:
    string longestCommonPrefix(vector<string>& Strings) {
        string Prefix = "";
        
        for (int i = 0; i < Strings[0].size(); i++)
        {
            char c = Strings[0][i];
            
            for (int j = 1; j < Strings.size(); j++)
            {
                if (i >= Strings[j].size() || c != Strings[j][i])
                {
                    return Prefix;
                }
            }
            
            Prefix += c;
        }
        
        return Prefix;
    }
};