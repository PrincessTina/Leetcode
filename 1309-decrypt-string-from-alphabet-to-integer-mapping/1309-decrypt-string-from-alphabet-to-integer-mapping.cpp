class Solution {
public:
    string freqAlphabets(string String) {
        string Result;
        int i = 0;
        
        while (i < String.size())
        {
            string Num;
            
            if (i + 2 < String.size() && String[i + 2] == '#')
            {
                Num = {String[i], String[i + 1]};
                i += 3;
            }
            else
            {
                Num = String[i];
                i++;
            }
            
            Result += 'a' + stoi(Num) - 1;
        }
        
        return Result;
    }
};