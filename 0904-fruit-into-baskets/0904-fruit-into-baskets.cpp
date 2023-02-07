class Solution {
public:
    int totalFruit(vector<int>& Fruits) {
        Fruit Basket1 = {-1, 0, 0};
        Fruit Basket2 = {-1, 0, 0};
        int MaxFruits = 0;
        
        // 1 0 1 4 1 4 1 2 3
        // 1 1 2 3
        // Третье решение
        for (int i = 0; i < Fruits.size(); i++)
        {
            if (Basket1.Type == -1)
            {
                Basket1 = {Fruits[i], 1, 1};
                Basket2.Streak = 0;
                continue;
            }
            
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
        
        // Второе решение
        /*for (int i = 0; i < Fruits.size(); i++)
        {
            for (int j = i; j < Fruits.size(); j++)
            {
                if (Basket1.first == -1)
                {
                    Basket1 = {Fruits[j], 1};
                    continue;
                }
                
                if (Basket1.first == Fruits[j])
                {
                    Basket1.second++;
                    continue;
                }

                if (Basket2.first == -1)
                {
                    Basket2 = {Fruits[j], 1};
                    continue;
                }

                if (Basket2.first == Fruits[j])
                {
                    Basket2.second++;
                    continue;
                }

                break;
            }
            
            if (Basket1.second + Basket2.second > MaxFruits)
            {
                MaxFruits = Basket1.second + Basket2.second;
            }

            Basket1 = {-1, 0};
            Basket2 = {-1, 0};
        }
        
        if (Basket1.second + Basket2.second > MaxFruits)
        {
            MaxFruits = Basket1.second + Basket2.second;
        }*/
        
        // Первое решение
        /*for (int Fruit: Fruits)
        {
            if (Basket1.first == Fruit)
            {
                Basket1.second++;
                continue;
            }
            
            if (Basket2.first == -1)
            {
                Basket2 = {Fruit, 1};
                continue;
            }
            
            if (Basket2.first == Fruit)
            {
                Basket2.second++;
                continue;
            }
            
            if (Basket1.second + Basket2.second > MaxFruits)
            {
                MaxFruits = Basket1.second + Basket2.second;
            }
                
            Basket1 = Basket2;
            Basket2 = {Fruit, 1};
        }
        
        if (Basket1.second + Basket2.second > MaxFruits)
        {
            MaxFruits = Basket1.second + Basket2.second;
        }*/
        
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