class Solution {
public:
    int rob(vector<int>& Capitals) {
        int Loot = 0;
        
        for (int i = 0; i < Capitals.size(); i++)
        {
            if (i > 1)
            {
                if (i > 2 && Capitals[i - 3] > Capitals[i - 2])
                {
                    Capitals[i] += Capitals[i - 3];
                }
                else
                {
                    Capitals[i] += Capitals[i - 2];
                }
            }
            
            if (Capitals[i] > Loot)
            {
                Loot = Capitals[i];
            }
        }
        
        return Loot;
    }
};