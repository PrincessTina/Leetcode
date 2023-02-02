class Solution {
public:
    bool isSubsequence(string Sub, string String) {
        int SymbolIndex = 0;
        
        for (char c: Sub)
        {
            if (SymbolIndex >= String.size())
            {
                return false;
            }
            
            while (c != String[SymbolIndex])
            {
                if (SymbolIndex + 1 >= String.size())
                {
                    return false;
                }
                
                SymbolIndex++;
            }
            
            SymbolIndex++;
        }
        
        return true;
    }
};