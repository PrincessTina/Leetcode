class Solution {
public:
    int finalValueAfterOperations(vector<string>& Operations) {
        int X = 0;
        
        for (string Operation: Operations)
        {
            if (Operation == "--X" || Operation == "X--")
            {
                X--;
            }
            else if (Operation == "++X" || Operation == "X++")
            {
                X++;
            }
        }
        
        return X;
    }
};