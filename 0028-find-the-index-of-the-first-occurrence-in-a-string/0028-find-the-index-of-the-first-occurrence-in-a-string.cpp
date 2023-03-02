class Solution {
public:
    int strStr(string String, string Sub) {
        int SIndex = 0;
        int i = 0;
        
        while (i < String.size())
        {
            if (String[i] == Sub[SIndex])
            {
                SIndex++;
                
                if (SIndex >= Sub.size())
                {
                    return i - Sub.size() + 1;
                }
                
                i++;
            }
            else
            {
                i += 1 - SIndex;
                SIndex = 0;
            }
        }
        
        return -1;
    }
};