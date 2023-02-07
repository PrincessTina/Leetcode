class Solution {
public:
    int totalFruit(vector<int>& Fruits) {
        Fruit Basket1 = {Fruits[0], 0, 0};
        Fruit Basket2 = {-1, 0, 0};
        int MaxFruits = 0;
        
        for (int i = 0; i < Fruits.size(); i++)
        {
            if (Basket1.Type == Fruits[i])
            {
                Basket1.Count++;
                Basket1.Streak++;
                Basket2.Streak = 0;
                continue;
            }
            
            if (Basket2.Type == -1)
            {
                Basket2 = {Fruits[i], 1, 1};
                Basket1.Streak = 0;
                continue;
            }
            
            if (Basket2.Type == Fruits[i])
            {
                Basket2.Count++;
                Basket2.Streak++;
                Basket1.Streak = 0;
                continue;
            }
            
            if (Basket1.Count + Basket2.Count > MaxFruits)
            {
                MaxFruits = Basket1.Count + Basket2.Count;
            }
            
            if (Basket1.Type == Fruits[i - 1])
            {
                Basket1 = {Basket1.Type, Basket1.Streak, 0};
            }
            else
            {
                Basket1 = {Basket2.Type, Basket2.Streak, 0};
            }
                
            Basket2 = {Fruits[i], 1, 1};
        }
        
        if (Basket1.Count + Basket2.Count > MaxFruits)
        {
            MaxFruits = Basket1.Count + Basket2.Count;
        }
        
        return MaxFruits;
    }
    
private:
    struct Fruit
    {
        int Type;
        int Count;
        int Streak;
    };
};