class Solution {
public:
    string decodeString(string String) {
        stack<char> Stack;
        string Result = "";
        
        for (char c: String)
        {
            if (c == ']')
            {
                string Sub = "";
                string k = "";
                
                while (Stack.top() != '[')
                {
                    Sub += Stack.top();
                    Stack.pop();
                }
                
                Stack.pop();
                reverse(Sub.begin(), Sub.end());
                
                while (!Stack.empty() && Stack.top() >= '0' && Stack.top() <= '9')
                {
                    k += Stack.top();
                    Stack.pop();
                }
                
                reverse(k.begin(), k.end());
                
                for (int i = 0; i < stoi(k); i++)
                {
                    for (char cSub: Sub)
                    {
                        Stack.push(cSub);
                    }
                }
            }
            else
            {
                Stack.push(c);
            }
        }
        
        while (!Stack.empty())
        {
            Result += Stack.top();
            Stack.pop();
        }
        
        reverse(Result.begin(), Result.end());
        return Result;
    }
};