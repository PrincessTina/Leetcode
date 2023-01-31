class Solution {
public:
    bool canConstruct(string RansomNote, string Magazine) {
        unordered_map<char, int> Letters;
        
        for(char Letter: RansomNote)
        {
            if (Letters.count(Letter) == 0)
            {
                Letters.insert({Letter, 1});
            }
            else
            {
                Letters[Letter]++;
            }
        }
        
        for (char Letter: Magazine)
        {
            if (Letters.count(Letter) > 0)
            {
                if (Letters[Letter] > 1)
                {
                    Letters[Letter]--;
                }
                else
                {
                    Letters.erase(Letter);
                }
            }
            
            if (Letters.empty())
            {
                return true;
            }
        }
        
        return false;
    }
};