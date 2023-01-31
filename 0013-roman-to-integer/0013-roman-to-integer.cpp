class Solution {
public:
    int romanToInt(string Input) 
    {
        unordered_map<string, int> RomanNums;
        
        RomanNums.insert({"I", 1});
        RomanNums.insert({"V", 5});
        RomanNums.insert({"X", 10});
        RomanNums.insert({"L", 50});
        RomanNums.insert({"C", 100});
        RomanNums.insert({"D", 500});
        RomanNums.insert({"M", 1000});
        
        RomanNums.insert({"IV", 4});
        RomanNums.insert({"IX", 9});
        RomanNums.insert({"XL", 40});
        RomanNums.insert({"XC", 90});
        RomanNums.insert({"CD", 400});
        RomanNums.insert({"CM", 900});
        
        int Result = 0;
        int i = 0;
        
        while(i < Input.size())
        {
            if (i + 1 < Input.size())
            {
                string DoubleNum = {Input[i], Input[i + 1]};
                    
                if (RomanNums.count(DoubleNum) > 0)
                {
                    Result += RomanNums.at(DoubleNum);
                    i += 2;
                    continue;
                }
            }
            
            Result += RomanNums.at({Input[i]});
            i++;
        }
        
        return Result;
    }
};