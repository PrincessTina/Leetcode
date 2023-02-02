class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& Array) {
        sort(Array.begin(), Array.end());
        
        const int Difference = Array[1] - Array[0];
        
        for (int i = 2; i < Array.size(); i++)
        {
            if (Array[i] - Array[i - 1] != Difference)
            {
                return false;
            }
        }
        
        return true;
    }
};