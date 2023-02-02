class Solution {
public:
    bool isHappy(int Number) {
        unordered_set<int> Combinations;
        
        while (true)
        {
            int NewNumber = 0;
            
            while (Number != 0)
            {
                NewNumber += pow(Number % 10, 2);
                Number /= 10;
            }
            
            Number = NewNumber;
            
            if (Number == 1)
            {
                return true;
            }
            
            if (Combinations.count(Number) == 0)
            {
                Combinations.insert(Number);
            }
            else
            {
                return false;
            }
        }
    }
};