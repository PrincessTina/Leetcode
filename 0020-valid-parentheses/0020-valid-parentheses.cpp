class Solution {
public:
    bool isValid(string Word) {
        stack<char> Stack;
        
        for (char c: Word)
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
        }
        
        return Stack.empty();
    }
};