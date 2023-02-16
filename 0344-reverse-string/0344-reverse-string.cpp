class Solution {
public:
    void reverseString(vector<char>& String) {
        int Left = 0;
        int Right = String.size() - 1;
        
        while (Left < Right)
        {
            const char t = String[Left];
            String[Left] = String[Right];
            String[Right] = t;
            
            Left++;
            Right--;
        }
    }
};