class Solution {
public:
    string reverseWords(string String) {
        int Left = 0;
        int Right = 0;
        int Space = 0;
        
        while (Space < String.size())
        {
            while (Space < String.size() && String[Space] != ' ')
            {
                Space++;
            }
            
            Right = Space - 1;
            
            while (Left < Right)
            {
                const char t = String[Left];
                String[Left] = String[Right];
                String[Right] = t;
                
                Left++;
                Right--;
            }
            
            Left = Space + 1;
            Space++;
        }
        
        return String;
    }
};