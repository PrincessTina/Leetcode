class Solution {
public:
    int maxVowels(string String, int k) {
        int Vowels = 0;
        int Max = 0;
        
        for (int i = 0; i < k; i++)
        {
            if (IsVowel(String[i]))
            {
                Vowels++;
            }
        }
        
        Max = Vowels;
        
        for (int i = 1; i <= String.size() - k; i++)
        {
            // if (Max == k)
            // {
            //     return k;
            // }
            
            if (IsVowel(String[i - 1]))
            {
                Vowels--;
            }
            
            if (IsVowel(String[i + k - 1]))
            {
                Vowels++;
            }
            
            if (Vowels > Max)
            {
                Max = Vowels;
            }
        }
        
        return Max;
    }
    
    bool IsVowel(char& Symbol)
    {
        switch (Symbol)
        {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                return true;
            default:
                return false;
        }
    }
};