class Solution {
public:
    int compress(vector<char>& Chars) {
        int i = 0;
        int Length = 0;
        int InsertionIndex = 0;
        char Char = Chars[i];
        
        while (true)
        {
            if (i < Chars.size() && Chars[i] == Char)
            {
                i++;
                Length++;
                continue;
            }
            
            Chars[InsertionIndex] = Char;
            InsertionIndex++;
            
            if (Length > 1)
            {
                string SLength = to_string(Length);
                
                for (char c: SLength)
                {
                    Chars[InsertionIndex] = c;
                    InsertionIndex++;
                }
            }
            
            if (i >= Chars.size())
            {
                break;
            }
            
            Length = 0;
            Char = Chars[i];
        }
        
        //Chars.erase(Chars.begin() + InsertionIndex - 1, Chars.end());
        return InsertionIndex;
    }
};