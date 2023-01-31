class Solution {
public:
    int subtractProductAndSum(int Num) {
        int Product = 1;
        int Sum = 0;
        
        while (Num != 0)
        {
            const int Digit = Num % 10;
            Num /= 10;
            
            Product *= Digit;
            Sum += Digit;
        }
        
        return Product - Sum;
    }
};