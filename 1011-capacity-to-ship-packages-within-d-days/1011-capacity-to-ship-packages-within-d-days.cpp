class Solution {
public:
    int shipWithinDays(vector<int>& Weights, int Days) {
        int Sum = 0;
        
        for (int Weight: Weights)
        {
            Sum += Weight;
        }
        
        for (int i = Sum / Days; i <= Sum; i++)
        {
            if (CheckWeight(Weights, Days, i))
            {
                return i;
            }
        }
        
        return 0;
    }
    
private:
    bool CheckWeight(vector<int>& Weights, int Days, int MaxWeight)
    {
        int Count = 1;
        int Sum = 0;
        
        for (int Weight: Weights)
        {
            if (Sum + Weight <= MaxWeight)
            {
                Sum += Weight;
                continue;
            }
            
            if (Weight > MaxWeight)
            {
                return false;
            }
            
            Sum = Weight;
            Count++;
            
            if (Count > Days)
            {
                return false;
            }
        }
        
        return Count <= Days;
    }
};