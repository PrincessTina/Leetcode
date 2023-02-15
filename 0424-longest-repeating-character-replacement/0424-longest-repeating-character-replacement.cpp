class Solution {
public:
    /*
        ABABCAAAA
          l      r
         
        k=2
        w=2
        m=8
    */
    int characterReplacement(string Word, int k) {
        int MaxLength = 0;
        
        for (char c = 'A'; c <= 'Z'; c++)
        {
            int Replacements = k;
            int LeftIndex = 0;
            int RightIndex = 0;
            
            if (Word.find(c) == -1)
            {
                continue;
            }
            
            while (RightIndex < Word.size())
            {
                if (Replacements < 0)
                {
                    if (Word[LeftIndex] != c)
                    {
                        Replacements++;
                    }
                    
                    LeftIndex++;
                    continue;
                }
                
                if (Word[RightIndex] == c)
                {
                    RightIndex++;
                }
                else if (Replacements > 0)
                {
                    Replacements--;
                    RightIndex++;
                }
                else
                {
                    if (MaxLength < RightIndex - LeftIndex)
                    {
                        MaxLength = RightIndex - LeftIndex;
                    }
                    
                    RightIndex++;
                    Replacements--;
                }
            }
            
            if (Replacements >= 0 && MaxLength < RightIndex - LeftIndex)
            {
                MaxLength = RightIndex - LeftIndex;
            }
        }
        
        return MaxLength;
    }
};