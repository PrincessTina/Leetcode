class Solution {
public:
    vector<int> addToArrayForm(vector<int>& Num, int k) {
        vector<int> Sum;
        vector<int> Digit;
        string kString = to_string(k);
        
        if (Num.size() > kString.size())
        {
            Sum = Num;
            Digit = GetSecondDigit(kString);
        }
        else
        {
            Sum = GetSecondDigit(kString);
            Digit = Num;
        }
        
        int RightSum = Sum.size() - 1;
        int RightDigit = Digit.size() - 1;
        int Rest = 0;
        
        while (RightSum >= 0)
        {
            if (RightDigit >= 0)
            {
                Sum[RightSum] += Digit[RightDigit];
            }
            else if (Rest == 0)
            {
                break;
            }
            
            Sum[RightSum] += Rest;
            Rest = 0;
            
            if (Sum[RightSum] > 9)
            {
                Sum[RightSum] -= 10;
                Rest = 1;
            }
            
            RightSum--;
            RightDigit--;
        }
        
        if (Rest == 1)
        {
            Sum.insert(Sum.begin(), 1);
        }
        
        return Sum;
    }
    
private:
    vector<int> GetSecondDigit(string& String)
    {
        vector<int> Num;
        
        for (int i = 0; i < String.size(); i++)
        {
            Num.push_back(String[i] - 48);
        }
        
        return Num;
    }
};