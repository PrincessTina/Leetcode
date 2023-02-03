class Solution {
public:
    int maxProfit(vector<int>& Prices) {
        int BuyPrice = Prices[0];
        int SellPrice = Prices[0];
        int MaxProfit = 0;
        
        for (int Price: Prices)
        {
            if (Price < BuyPrice)
            {
                BuyPrice = SellPrice = Price;
                continue;
            }
            
            if (Price > SellPrice)
            {
                SellPrice = Price;
                
                const int Profit = SellPrice - BuyPrice;
                
                if (Profit > MaxProfit)
                {
                    MaxProfit = Profit;
                }
            }
        }
        
        return MaxProfit;
    }
};