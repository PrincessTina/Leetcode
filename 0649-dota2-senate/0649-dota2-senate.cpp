class Solution {
public:
    // R: 1, D: 0 - Votes - D
    // R: 0, D: 0 - Banes
    // DR RD/ RD RD RD DR DR DR
    // D R R R R D D D
    // R R D
    // IRRD
    // BR - I, BD - Y
    // RRR DDDDD RDR DDD RRRR DD RRR DDDDD RDR DDD RRRR DD
    // RRR DD DDDD DD R DDDD DDDD DD
    string predictPartyVictory(string Senate) {
        unordered_map<char, int> Votes = {{'R', 0}, {'D', 0}};
        unordered_map<char, int> Banes = {{'R', 0}, {'D', 0}};
        char ImportantSenator = '0';
        
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
        
//         for (const char& Senator: Senate)
//         {
//             const char Opposite = (Senator == 'R') ? 'D' : 'R';
            
//             if (Banes[Senator] == 0)
//             {
//                 Votes[Senator]++;
//                 Banes[Opposite]++;
//             }
//             else
//             {
//                 Banes[Senator]--;
//             }
//         }
        
//         char Winner = ImportantSenator;
        
//         if (Votes['R'] - Banes['R'] != Votes['D'] - Banes['D'])
//         {
//             Winner = (Votes['R'] - Banes['R'] > Votes['D'] - Banes['D']) ? 'R' : 'D';
//         }
        
//         char Winner = (Votes['R'] - Banes['R'] > Votes['D'] - Banes['D']) ? 'R' : 'D';
        
//         if (Winner == 'R')
//         {
//             return "Radiant";
//         }
        
//         if (Winner == 'D')
//         {
//             return "Dire";
//         }
        
        return "";
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