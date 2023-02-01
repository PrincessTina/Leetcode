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
        
        /*for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '#')
            {
                s.erase(i - 1, 2);
            }
        }
        
        for (int i = 0; i < t.size(); i++)
        {
            if (t[i] == '#')
            {
                t.erase(i - 1, 2);
            }
        }
        
        return s == t;*/
    }
};