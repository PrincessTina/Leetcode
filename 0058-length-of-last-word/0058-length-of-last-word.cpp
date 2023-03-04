class Solution {
public:
    int lengthOfLastWord(string String) {
        int WIndex = 0;
        int SIndex = 0;
        int Length = 0;
        
        while (WIndex < String.size())
        {
            if (String[WIndex] == ' ')
            {
                WIndex++;
                SIndex++;
                continue;
            }
            
            if (SIndex == String.size())
            {
                Length = SIndex - WIndex;
                break;
            }
            
            if (String[SIndex] != ' ')
            {
                SIndex++;
                continue;
            }
            
            Length = SIndex - WIndex;
            SIndex = WIndex = SIndex + 1;
        }
        
        return Length;
    }
};