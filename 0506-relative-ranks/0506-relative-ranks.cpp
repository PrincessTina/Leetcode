class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& Scores) {
        vector<string> Result(Scores.size());
        vector<pair<int, int>> Rank;
        
        for (int i = 0; i < Scores.size(); i++)
        {
            Rank.push_back({Scores[i], i});
        }
        
        sort(Rank.begin(), Rank.end(), [](const pair<int, int>& First, const pair<int, int>& Second)
        {
            return First.first > Second.first;
        });
        
        for (int i = 0; i < Rank.size(); i++)
        {
            string Place = "";
            
            switch (i)
            {
                case 0:
                    Place = "Gold Medal";
                    break;
                case 1:
                    Place = "Silver Medal";
                    break;
                case 2:
                    Place = "Bronze Medal";
                    break;
                default:
                    Place = to_string(i + 1);
            }
            
            Result[Rank[i].second] = Place;
        }
        
        return Result;
    }
};