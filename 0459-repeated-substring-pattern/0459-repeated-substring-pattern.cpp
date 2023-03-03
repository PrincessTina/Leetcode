class Solution {
public:
    bool repeatedSubstringPattern(string String) {
        bool IsRepeating = false;
        int Length = 1;
        int i = 1;
        int n = 1;
        
        while (Length < String.size())
        {
            if (String.size() % Length != 0)
            {
                Length++;
                continue;
            }
            
            IsRepeating = true;
            n = 1;
            
            while (n < String.size() / Length)
            {
                for (int j = 0; j < Length; j++)
                {
                    if (String[j] == String[n * Length + j])
                    {
                        continue;
                    }
                    
                    IsRepeating = false;
                    break;
                }
                
                if (!IsRepeating)
                {
                    break;
                }
                
                n++;
            }
            
            if (IsRepeating)
            {
                return true;
            }
            
            Length++;
        }
        
        return false;
        
        /*bool IsRepeating = false;
        int Length = 1;
        int i = 1;
        
        while (i < String.size())
        {
            if (String[i] != String[0])
            {
                i++;
                Length++;
                IsRepeating = false;
                continue;
            }
            
            IsRepeating = true;
            
            for (int j = 0; j < Length; j++)
            {
                if (String[j] == String[i + j])
                {
                    continue;
                }
                
                Length++;
                IsRepeating = false;
                break;
            }
            
            i += IsRepeating ? Length : 1;
        }
        
        return IsRepeating;*/
    }
    
    //bbbcbbbc
    //bbcbbbcb
};