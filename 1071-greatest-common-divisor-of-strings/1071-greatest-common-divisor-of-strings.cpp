class Solution {
public:
    string gcdOfStrings(string Str1, string Str2) {
        if (Str1 + Str2 != Str2 + Str1)
        {
            return "";
        }
        
        return Str1.substr(0, gcd(Str1.size(), Str2.size()));
    }
};