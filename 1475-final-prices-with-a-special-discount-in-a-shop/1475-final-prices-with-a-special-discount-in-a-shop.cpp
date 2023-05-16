class Solution {
public:
    vector<int> finalPrices(vector<int>& Prices) {
        vector<int> Answer(Prices.size());
        stack<pair<int, int>> Stack;
        
        for (int i = 0; i < Prices.size(); i++)
        {
            while (!Stack.empty() && Stack.top().first >= Prices[i])
            {
                Answer[Stack.top().second] = Stack.top().first - Prices[i];
                Stack.pop();
            }
            
            Stack.push({Prices[i], i});
        }
        
        while (!Stack.empty())
        {
            Answer[Stack.top().second] = Stack.top().first;
            Stack.pop();
        }
        
        return Answer;
    }
};