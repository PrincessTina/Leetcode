class Solution {
public:
    int splitNum(int Num) {
        priority_queue<char, vector<char>, greater<char>> Numbers;
        string Num1 = "";
        string Num2 = "";
        
        for (char c: to_string(Num))
        {
            Numbers.push(c);
        }
        
        while (Numbers.size() > 0)
        {
            Num1 += Numbers.top();
            Numbers.pop();
            
            if (Numbers.size() > 0)
            {
                Num2 += Numbers.top();
                Numbers.pop();
                continue;
            }
            
            break;
        }
        
        return stoi(Num1) + stoi(Num2);
    }
};