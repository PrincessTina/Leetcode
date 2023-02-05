class Solution {
public:
    char findTheDifference(string S1, string S2) {
        char Result = S2[S2.size() - 1];
        
        for (int i = 0; i < S1.size(); i++)
        {
            Result = Result xor S1[i] xor S2[i];
        }
        
        return Result;
    }
};