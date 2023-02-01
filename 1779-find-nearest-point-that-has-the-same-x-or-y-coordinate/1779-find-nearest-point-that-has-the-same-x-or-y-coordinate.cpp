class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& Points) {
        int Index = -1;
        int MinDistance;
        
        for (int i = 0; i < Points.size(); i++)
        {
            int Distance = 0;
            
            if (Points[i][0] == x)
            {
                Distance = abs(Points[i][1] - y);
            }
            else if (Points[i][1] == y)
            {
                Distance = abs(Points[i][0] - x);
            }
            else
            {
                continue;
            }
            
            if (Index == -1 || Distance < MinDistance)
            {
                Index = i;
                MinDistance = Distance;
            }
        }
        
        return Index;
    }
};