class Solution {
public:
    int hammingWeight(uint32_t Num) {
        int OnesCount = 0;
        
        while (Num != 0)
        {
            if (Num % 2 == 1)
            {
                OnesCount++;
            }
            
            Num *= 0.5;
        }
        
        return OnesCount;
    }
};