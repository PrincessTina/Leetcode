class Solution {
public:
    int splitNum(int Num) {
        priority_queue<int, vector<int>, greater<int>> Numbers;
        string Num1 = "";
        string Num2 = "";
        
        while (Num != 0)
        {
            Numbers.push(Num % 10);
            Num /= 10;
        }
        
        while (Numbers.size() > 0)
        {
            Num1 += to_string(Numbers.top());
            Numbers.pop();
            
            if (Numbers.size() > 0)
            {
                Num2 += to_string(Numbers.top());
                Numbers.pop();
                continue;
            }
            
            break;
        }
        
        return stoi(Num1) + stoi(Num2);
    }
};