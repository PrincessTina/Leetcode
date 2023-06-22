class Solution {
public:
    bool isPalindrome(int X) {
        string Number = to_string(X);
        int Left = 0;
        int Right = Number.size() - 1;
        
        while (Left < Right)
        {
            if (Number[Left] != Number[Right])
            {
                return false;
            }
            
            Left++;
            Right--;
        }
        
        return true;
    }
};