class Solution {
public:
    bool repeatedSubstringPattern(string String) {
        int Length = 1;
        
        while (Length < String.size())
        {
            if (String.size() % Length != 0)
            {
                goto Cycle;
            }
            
            for (int n = 1; n < String.size() / Length; n++)
            {
                for (int i = 0; i < Length; i++)
                {
                    if (String[i] == String[n * Length + i])
                    {
                        continue;
                    }
                    
                    goto Cycle;
                }
            }
            
            return true;
            
        Cycle:
            Length++;
        }
        
        return false;
    }
};