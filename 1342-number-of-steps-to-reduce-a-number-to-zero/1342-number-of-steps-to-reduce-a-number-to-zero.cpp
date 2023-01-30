class Solution {
public:
    int numberOfSteps(int Num) {
        int StepsCount = 0;
        
        while (Num != 0)
        {
            StepsCount += 1;
            
            if (Num % 2 == 0)
            {
                Num /= 2;
            }
            else
            {
                Num -= 1;
            }
        }
        
        return StepsCount;
    }
};