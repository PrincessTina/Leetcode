class Solution {
public:
    int countOdds(int Low, int High) {
        int IntervalSize = High - Low + 1;
        double OddsCount = (double) IntervalSize * 0.5;
        
        if (Low % 2 != 0)
        {
            return ceil(OddsCount);
        }
        
        return floor(OddsCount);
    }
};