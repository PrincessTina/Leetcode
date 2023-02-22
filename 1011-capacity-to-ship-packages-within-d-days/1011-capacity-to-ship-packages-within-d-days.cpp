class Solution {
public:
    int shipWithinDays(vector<int>& Weights, int Days) {
        int Sum = 0;
        int Max = 0;
        
        for (int Weight: Weights)
        {
            // if (Weight > Max)
            // {
            //     Max = Weight;
            // }
            
            Sum += Weight;
        }
        
        Max = Sum / Days;
        
        for (int i = Max; i <= Sum; i++)
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

/*
1 2 3  4  5  6  7  8  9 10
1 3 6 10 15 21 28 36 45 55

1 2 3 1 1
1 3 6 7 8
*/