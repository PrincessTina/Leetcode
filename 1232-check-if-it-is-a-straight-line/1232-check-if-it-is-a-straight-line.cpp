class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& Coords) {
        const double Numerator = Coords[1][1] - Coords[0][1];
        const double Denominator = Coords[1][0] - Coords[0][0];
        
        const double k = Denominator != 0 ? Numerator / Denominator : 0;
        const double b = Coords[0][1] - Coords[0][0] * k;
        
        for (int i = 2; i < Coords.size(); i++)
        {
            if (Denominator == 0)
            {
                if (Coords[i][0] != Coords[0][0])
                {
                    return false;
                }
                
                continue;
            }
            
            if (Coords[i][1] != Coords[i][0] * k + b)
            {
                return false;
            }
        }
        
        return true;
    }
};