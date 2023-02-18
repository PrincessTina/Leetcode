class Solution {
public:
    string addBinary(string A, string B) {
        const int MaxSize = A.size() > B.size() ? A.size() : B.size();
        string Sum(MaxSize, '0');
        int iA = A.size() - 1;
        int iB = B.size() - 1;
        int Rest = 0;
        
        for (int i = MaxSize - 1; i >= 0; i--)
        {
            int Ones = 0;
            
            if (iA >= 0 && A[iA] == '1')
            {
                Ones++;
            }
            
            if (iB >= 0 && B[iB] == '1')
            {
                Ones++;
            }
            
            if (Rest == 1)
            {
                Ones++;
            }
            
            switch(Ones)
            {
                case 1:
                    Sum[i] = '1';
                    Rest = 0;
                    break;
                case 2:
                    Rest = 1;
                    break;
                case 3:
                    Sum[i] = '1';
                    Rest = 1;
                    break;
            }
            
            iA--;
            iB--;
        }
        
        if (Rest == 1)
        {
            Sum.insert(0, "1");
        }
        
        return Sum;
    }
};