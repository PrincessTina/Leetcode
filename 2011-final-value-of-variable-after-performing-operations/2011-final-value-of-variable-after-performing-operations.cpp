class Solution {
public:
    int finalValueAfterOperations(vector<string>& Operations) {
        unordered_map<string, int> AllOperations;
        int X = 0;
        
        AllOperations.insert({"--X", -1});
        AllOperations.insert({"X--", -1});
        AllOperations.insert({"++X", 1});
        AllOperations.insert({"X++", 1});
        
        for (string Operation: Operations)
        {
            X += AllOperations[Operation];
        }
        
        /*for (string Operation: Operations)
        {
            if (Operation == "--X" || Operation == "X--")
            {
                X--;
            }
            else if (Operation == "++X" || Operation == "X++")
            {
                X++;
            }
        }*/
        
        return X;
    }
};