class Solution {
public:
    int minMaxDifference(int Num) {
        string Min = to_string(Num);
        string Max = Min;
        char ReplaceMin = 'A';
        char ReplaceMax = 'A';
        
        for (int i = 0; i < Min.size(); i++)
        {
            if (ReplaceMax == 'A' && Max[i] != '9')
            {
                ReplaceMax = Max[i];
            }
            
            if (Max[i] == ReplaceMax)
            {
                Max[i] = '9';
            }
            
            if (ReplaceMin == 'A' && Min[i] != '0')
            {
                ReplaceMin = Min[i];
            }
            
            if (Min[i] == ReplaceMin)
            {
                Min[i] = '0';
            }
        }
        
        return stoi(Max) - stoi(Min);
    }
};