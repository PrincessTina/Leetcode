class Solution {
public:
    bool repeatedSubstringPattern(string String) {
        int Length = 1;
        
        while (Length < String.size())
        {
            if (String.size() % Length != 0)
            {
                Length++;
                continue;
            }
            
            int n = 1;
            
            while (n < String.size() / Length)
            {
                for (int i = 0; i < Length; i++)
                {
                    if (String[i] == String[n * Length + i])
                    {
                        continue;
                    }
                    
                    goto Cycle;
                }
                
                n++;
            }
            
            return true;
            
        Cycle:
            Length++;
        }
        
        return false;
    }
};