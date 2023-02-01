class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> S1;
        stack<char> S2;
        
        for (char c: s)
        {
            if (c == '#')
            {
                if (!S1.empty())
                {
                    S1.pop();
                }
            }
            else
            {
                S1.push(c);
            }
        }
        
        for (char c: t)
        {
            if (c == '#')
            {
                if (!S2.empty())
                {
                    S2.pop();
                }
            }
            else
            {
                S2.push(c);
            }
        }
        
        return S1 == S2;
    }
};