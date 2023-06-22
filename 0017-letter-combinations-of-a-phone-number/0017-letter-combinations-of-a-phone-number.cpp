class Solution {
public:
    vector<string> letterCombinations(string Digits) {
        if (Digits.empty())
        {
            return {};
        }
        
        string Combination(Digits.size(), '0');
        
        Recursion(Digits, 0, Combination);
        return Result;
    }
    
private:
    vector<string> Result;
    unordered_map<char, vector<char>> Map = 
    {
        {'2', {'a', 'b', 'c'}},
        {'3', {'d', 'e', 'f'}},
        {'4', {'g', 'h', 'i'}},
        {'5', {'j', 'k', 'l'}},
        {'6', {'m', 'n', 'o'}},
        {'7', {'p', 'q', 'r', 's'}},
        {'8', {'t', 'u', 'v'}},
        {'9', {'w', 'x', 'y', 'z'}}
    };
    
    void Recursion(string& Digits, int Index, string& Combination)
    {
        if (Index >= Digits.size())
        {
            Result.push_back(Combination);
            return;
        }
        
        for (char& Symbol: Map[Digits[Index]])
        {
            Combination[Index] = Symbol;
            Recursion(Digits, Index + 1, Combination);
        }
    }
};