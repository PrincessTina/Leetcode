class Solution {
public:
    int minCostClimbingStairs(vector<int>& Cost) {
        vector<int> Sum = {0, 0, Cost[0]};
        
        for (int i = 1; i < Cost.size(); i++)
        {
            int CurrentCost = Sum[i] + Cost[i];
            
            if (i + 1 >= Sum.size())
            {
                Sum.push_back(CurrentCost);
            }
            else if (CurrentCost < Sum[i + 1])
            {
                Sum[i + 1] = CurrentCost;
            }
            
            if (i + 2 >= Sum.size())
            {
                Sum.push_back(CurrentCost);
            }
            else if (CurrentCost < Sum[i + 1])
            {
                Sum[i + 2] = CurrentCost;
            }
        }
        
        return Sum[Cost.size()];
    }
};