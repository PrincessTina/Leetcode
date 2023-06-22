class Solution {
public:
    bool lemonadeChange(vector<int>& Bills) {
        int Fives = 0;
        int Tens = 0;
        
        for (int Bill: Bills)
        {
            if (Bill == 5)
            {
                Fives++;
                continue;
            }
            
            if (Bill == 10)
            {
                if (Fives > 0)
                {
                    Fives--;
                    Tens++;
                    continue;
                }
                
                return false;
            }
            
            // if Bill == 20
            if (Fives > 0 && Tens > 0)
            {
                Fives--;
                Tens--;
                continue;
            }
            
            if (Fives >= 3)
            {
                Fives -= 3;
                continue;
            }
            
            return false;
        }
        
        return true;
        
        // если 5 - не нужна сдача
        // если 10 - нужна 1 "5"
        // если 20 - нужно 3 "5" или 1 "5" и 1 "10"
    }
};