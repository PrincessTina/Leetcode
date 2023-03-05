class Solution {
public:
    string multiply(string Num1, string Num2) {
        if (Num1 == "0" || Num2 == "0")
        {
            return "0";
        }
        
        string Result(Num1.size() + Num2.size(), '0');
        int Rest = 0;
        
        for (int i = Num2.size() - 1; i >= 0; i--)
        {
            for (int j = Num1.size() - 1; j >= 0; j--)
            {
                int Num = (Result[i + j + 1] - '0') + (Num2[i] - '0') * (Num1[j] - '0') + Rest;
                Rest = Num / 10;
                Num %= 10;
                
                Result[i + j + 1] = Num + '0';
            }
            
            Result[i] += Rest;
            Rest = 0;
        }
        
        if (Result[0] == '0')
        {
            Result.erase(Result.begin());
        }
        
        return Result;
        
        /* 123
           456
           
           738
          615
         492
         56088  
         
         
         100
         100
         
         100
        000
       100
       10100
       
         999
         999
         
        8991
       8991
      8991
      998001
        */
    }
};