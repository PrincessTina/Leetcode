class Solution {
public:
    bool canPlaceFlowers(vector<int>& Flowerbed, int n) {
        for (int i = 0; i < Flowerbed.size(); i++)
        {
            if (Flowerbed[i] == 1)
            {
                continue;
            }
            
            if (i - 1 >= 0 && Flowerbed[i - 1] == 1)
            {
                continue;
            }
            
            if (i + 1 < Flowerbed.size() && Flowerbed[i + 1] == 1)
            {
                continue;
            }
            
            Flowerbed[i] = 1;
            n--;
        }
        
        if (n <= 0)
        {
            return true;
        }
        
        return false;
    }
};