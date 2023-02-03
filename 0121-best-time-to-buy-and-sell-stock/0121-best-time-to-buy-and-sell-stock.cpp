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
        
        /*int BuyDate = 0;
        int SellDate = Prices.size() - 1;
        int BuyPrice = Prices[BuyDate];
        int SellPrice = Prices[SellDate];
        
        while (BuyDate <= SellDate)
        {
            if (Prices[BuyDate] < BuyPrice)
            {
                BuyPrice = Prices[BuyDate];
            }
            
            if (Prices[SellDate] > SellPrice)
            {
                SellPrice = Prices[SellDate];
            }
            
            BuyDate++;
            SellDate--;
        }
        
        const int Profit = SellPrice - BuyPrice;    
        return Profit > 0 ? Profit : 0;*/
    }
};