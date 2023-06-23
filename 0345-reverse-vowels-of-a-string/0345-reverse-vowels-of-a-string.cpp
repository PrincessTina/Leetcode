class Solution {
public:
    string reverseVowels(string Input) {
        int Left = 0;
        int Right = Input.size() - 1;
        
        while (Left < Right)
        {
            if (!IsVowel(Input[Left]))
            {
                Left++;
                continue;
            }
            
            if (!IsVowel(Input[Right]))
            {
                Right--;
                continue;
            }
            
            const char Temp = Input[Left];
            Input[Left] = Input[Right];
            Input[Right] = Temp;
            
            Left++;
            Right--;
        }
        
        return Input;
    }
    
    bool IsVowel(char& Symbol)
    {
        switch (Symbol)
        {
            case 'a':
            case 'A':
            case 'e':
            case 'E':
            case 'i':
            case 'I':
            case 'o':
            case 'O':
            case 'u':
            case 'U':
                return true;
            default:
                return false;
        }
    }
};