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
            }
        }
        
        vector<pair<string, int>> Vector(Map.size());
        copy(Map.begin(), Map.end(), Vector.begin());
        
        sort(Vector.begin(), Vector.end(), [](const pair<string, int>& Word1, const pair<string, int>& Word2)
        {
            if (Word1.second == Word2.second)
            {
                return Word1.first < Word2.first;
            }
            
            return Word1.second > Word2.second;
        });
        
        for (int i = 0; i < k; i++)
        {
            Result.push_back(Vector[i].first);
        }
        
        return Result;
    }
};