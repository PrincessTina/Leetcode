class Solution {
public:
    string mergeAlternately(string Word1, string Word2) {
        int i = 0;
        int j = 0;
        string Result(Word1.size() + Word2.size(), '\0');
        
        while (i < Result.size())
        {
            if (j < Word1.size() && j < Word2.size())
            {
                Result[i] = Word1[j];
                Result[i + 1] = Word2[j];
               
                j++;
                i += 2;
                continue;
            }
            
            if (j >= Word1.size())
            {
                Result[i] = Word2[j];
            }
            else
            {
                Result[i] = Word1[j];
            }
            
            i++;
            j++;
        }
        
        return Result;
        
        /*
        0 1 2
        a b c
        
        0 1 2
        p q r
        
        0 1 2 3 4 5
        a p b q c r
        */
    }
};