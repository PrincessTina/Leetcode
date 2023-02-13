class Solution {
public:
    string getHint(string Secret, string Guess) {
        unordered_map<char, int> Digits;
        int Bulls = 0;
        int Cows = 0;
        
        for (int i = 0; i < Secret.size(); i++)
        {
            if (Secret[i] == Guess[i])
            {
                Bulls++;
                continue;
            }
            
            if (Digits.count(Secret[i]))
            {
                Digits[Secret[i]]++;
                
                if (abs(Digits[Secret[i]]) < abs(Digits[Secret[i]] - 1))
                {
                    Cows++;
                }
            }
            else
            {
                Digits.insert({Secret[i], 1});
            }
            
            if (Digits.count(Guess[i]))
            {
                Digits[Guess[i]]--;
                
                if (abs(Digits[Guess[i]]) < abs(Digits[Guess[i]] + 1))
                {
                    Cows++;
                }
            }
            else
            {
                Digits.insert({Guess[i], -1});
            }
        }
        
        return to_string(Bulls) + "A" + to_string(Cows) + "B";
    }
};