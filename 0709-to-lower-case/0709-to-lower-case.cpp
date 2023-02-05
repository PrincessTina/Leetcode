class Solution {
public:
    string toLowerCase(string String) {
        for (char& c: String)
        {
            if (c >= 'A' && c <= 'Z')
            {
                c += 32;
            }
        }
        
        return String;
    }
};