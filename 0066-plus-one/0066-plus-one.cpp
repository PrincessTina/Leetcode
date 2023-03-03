class Solution {
public:
    vector<int> plusOne(vector<int>& Digits) {
        for (int i = Digits.size() - 1; i >= 0; i--)
        {
            if (Digits[i] < 9)
            {
                Digits[i] += 1;
                return Digits;
            }
            
            Digits[i] = 0;
        }
        
        Digits.insert(Digits.begin(), 1);
        return Digits;
    }
};