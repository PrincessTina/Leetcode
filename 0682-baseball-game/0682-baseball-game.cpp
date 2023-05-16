class Solution {
public:
    int calPoints(vector<string>& Operations) {
        stack<int> Stack;
        int Sum = 0;
        
        for (const string& Operation: Operations)
        {
            if (Operation == "+")
            {
                int Last = Stack.top();
                Stack.pop();
                int Result = Stack.top() + Last;
                
                Stack.push(Last);
                Stack.push(Result);
                
                Sum += Stack.top();
                continue;
            }
            
            if (Operation == "D")
            {
                Stack.push(Stack.top() * 2);
                Sum += Stack.top();
                continue;
            }
            
            if (Operation == "C")
            {
                Sum -= Stack.top();
                Stack.pop();
                continue;
            }
            
            Stack.push(stoi(Operation));
            Sum += Stack.top();
        }
        
        return Sum;
    }
};