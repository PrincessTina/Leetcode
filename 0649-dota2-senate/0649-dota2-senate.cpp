class Solution {
public:
    string predictPartyVictory(string Senate) {
        unordered_map<char, int> Votes = {{'R', 0}, {'D', 0}};
        unordered_map<char, int> Banes = {{'R', 0}, {'D', 0}};
        
        while (true)
        {
            Senate = VotingRound(Senate, Votes, Banes);
            
            if (Votes['R'] == 0)
            {
                return "Dire";
            }
            
            if (Votes['D'] == 0)
            {
                return "Radiant";
            }
            
            Votes['R'] = 0;
            Votes['D'] = 0;
        }
    }
    
    string VotingRound(const string& Senate, unordered_map<char, int>& Votes, unordered_map<char, int>& Banes)
    {
        string UpdatedSenate = "";
        
        for (const char& Senator: Senate)
        {
            const char Opposite = (Senator == 'R') ? 'D' : 'R';
            
            if (Banes[Senator] == 0)
            {
                Votes[Senator]++;
                Banes[Opposite]++;
                
                UpdatedSenate += Senator;
            }
            else
            {
                Banes[Senator]--;
            }
        }
        
        return UpdatedSenate;
    }
};