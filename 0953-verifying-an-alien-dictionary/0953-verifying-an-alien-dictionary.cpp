class Solution {
public:
    bool isAlienSorted(vector<string>& Words, string Order) {
        unordered_map<char, int> Dictionary;
        
        for (int i = 0; i < Order.size(); i++)
        {
            Dictionary.insert({Order[i], i});
        }
        
        for (int i = 0; i < Words.size(); i++)
        {
            if (i + 1 >= Words.size())
            {
                break;
            }
            
            for (int j = 0; j < Words[i].size(); j++)
            {
                if (j >= Words[i + 1].size())
                {
                    return false;
                }
                
                if (Dictionary[Words[i][j]] < Dictionary[Words[i + 1][j]])
                {
                    break;
                }
                else if (Dictionary[Words[i][j]] > Dictionary[Words[i + 1][j]])
                {
                    return false;
                }
            }
        }
        
        return true;
    }
};