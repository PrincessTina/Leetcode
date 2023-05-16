class Solution {
public:
    int titleToNumber(string ColumnTitle) {
        const int Degree = 26;
        int ColumnNumber = 0;
        
        for (int i = 0; i < ColumnTitle.size(); i++)
        {
            ColumnNumber += (ColumnTitle[i] - 'A' + 1) * pow(Degree, ColumnTitle.size() - i - 1);
        }
        
        return ColumnNumber;
    }
};