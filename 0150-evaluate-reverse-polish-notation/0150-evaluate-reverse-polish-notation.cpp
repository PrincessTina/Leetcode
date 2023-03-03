class Solution {
public:
    int evalRPN(vector<string>& Tokens) {
        stack<int> Stack;
        
        for (string Token: Tokens)
        {
            if (Token.size() != 1 || Token[0] >= '0')
            {
                Stack.push(stoi(Token));
                continue;
            }
            
            const int Second = Stack.top();
            Stack.pop();
            const int First = Stack.top();
            Stack.pop();
            
            switch (Token[0])
            {
                case '*':
                    Stack.push(First * Second);
                    break;
                case '/':
                    Stack.push(First / Second);
                    break;
                case '+':
                    Stack.push(First + Second);
                    break;
                case '-':
                    Stack.push(First - Second);
                    break;
            }
        }
        
        return Stack.top();
    }
};