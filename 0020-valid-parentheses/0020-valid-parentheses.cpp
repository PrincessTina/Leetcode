class Solution {
public:
    bool isValid(string Word) {
        unordered_map<char, char> Map = {{')', '('}, {'}', '{'}, {']', '['}};
        stack<char> Stack;
        
        for (char c: Word)
        {
            if (Map.count(c))
            {
                if (!Stack.empty() && Stack.top() == Map[c])
                {
                    Stack.pop();
                }
                else
                {
                    return false;
                }
            }
            else
            {
                Stack.push(c);
            }
        }
        
        /*for (char c: Word)
        {
            char Pair;
            
            switch(c)
            {
                case ')':
                    Pair = '(';
                    break;
                case '}':
                    Pair = '{';
                    break;
                case ']':
                    Pair = '[';
                    break;
                default:
                    Stack.push(c);
                    continue;
            }
            
            if (!Stack.empty() && Stack.top() == Pair)
            {
                Stack.pop();
            }
            else
            {
                return false;
            }
        }*/
        
        return Stack.empty();
    }
};