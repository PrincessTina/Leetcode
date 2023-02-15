class Solution {
public:
    vector<string> topKFrequent(vector<string>& Words, int k) {
        unordered_map<string, int> Map;
        vector<string> Result;
        
        for (string Word: Words)
        {
            if (Map.count(Word))
            {
                Map[Word]++;
            }
            else
            {
                Map.insert({Word, 1});
                Result.push_back(Word);
            }
        }
        
        sort(Result.begin(), Result.end(), [&Map](const string& Word1, const string& Word2)
        {
            if (Map[Word1] == Map[Word2])
            {
                return Word1 < Word2;
            }
            
            return Map[Word1] > Map[Word2];
        });
        
        Result.erase(Result.begin() + k, Result.end());
        return Result;
    }
};