class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> Strings;
        
        for (int i = 1; i <= n; i++)
        {
            if (i % 15 == 0)
            {
                Strings.push_back("FizzBuzz");
                continue;
            }
            
            if (i % 3 == 0)
            {
                Strings.push_back("Fizz");
                continue;
            }
            
            if (i % 5 == 0)
            {
                Strings.push_back("Buzz");
                continue;
            }
            
            Strings.push_back(to_string(i));
        }
        
        return Strings;
    }
};