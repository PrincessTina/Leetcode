class Solution {
public:
    bool isPalindrome(string String) {
        int Left = 0;
        int Right = String.size() - 1;
        
        while (Left < Right)
        {
            if (!IsAlphaNumeric(String[Left]))
            {
                Left++;
                continue;
            }
            
            if (!IsAlphaNumeric(String[Right]))
            {
                Right--;
                continue;
            }
            
            if (String[Left] != String[Right])
            {
                return false;
            }
            
            Left++;
            Right--;
        }
        
        return true;
    }
    
    bool IsAlphaNumeric(char& Symbol)
    {
        if (Symbol >= 'A' && Symbol <= 'Z')
        {
            Symbol += 'a' - 'A';
            return true;
        }
        
        if (Symbol >= 'a' && Symbol <= 'z')
        {
            return true;
        }
        
        if (Symbol >= '0' && Symbol <= '9')
        {
            return true;
        }
        
        return false;
    }
};