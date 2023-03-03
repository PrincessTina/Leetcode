class Solution {
public:
    vector<int> plusOne(vector<int>& Digits) {
        int i = Digits.size() - 1;
        
        while (i >= 0)
        {
            if (Digits[i] < 9)
            {
                Digits[i] += 1;
                break;
            }
            
            Digits[i] = 0;
            
            if (i == 0)
            {
                Digits.insert(Digits.begin(), 1);
                break;
            }
            
            i--;
        }
        
        return Digits;
    }
};