class Solution {
public:
    int maximumWealth(vector<vector<int>>& Accounts) {
        int MaxBalance = 0;
        int ClientBalance;
        
        for (int i = 0; i < Accounts.size(); i++)
        {
            ClientBalance = 0;
            
            for (int j = 0; j < Accounts[i].size(); j++)
            {
                ClientBalance += Accounts[i][j];
            }
            
            if (ClientBalance > MaxBalance)
            {
                MaxBalance = ClientBalance;
            }
        }
        
        return MaxBalance;
    }
};