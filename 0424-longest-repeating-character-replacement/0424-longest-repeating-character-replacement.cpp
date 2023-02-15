class Solution {
public:
    int characterReplacement(string Word, int k) {
        unordered_set<char> Letters;
        int MaxLength = 0;
        
        for (char c: Word)
        {
            Letters.insert(c);
        }
        
        for (char c: Letters)
        {
            int Replacements = k;
            int LeftIndex = 0;
            int RightIndex = 0;
            
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
                
                if (Word[RightIndex] != c)
                {
                    if (Replacements == 0 && MaxLength < RightIndex - LeftIndex)
                    {
                        MaxLength = RightIndex - LeftIndex;
                    }
                    
                    Replacements--;
                }
                
                RightIndex++;
            }
            
            if (Replacements >= 0 && MaxLength < RightIndex - LeftIndex)
            {
                MaxLength = RightIndex - LeftIndex;
            }
        }
        
        return MaxLength;
    }
};