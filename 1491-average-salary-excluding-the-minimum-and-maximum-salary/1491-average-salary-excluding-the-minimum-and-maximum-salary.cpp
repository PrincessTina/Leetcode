class Solution {
public:
    double average(vector<int>& Salary) {
        sort(Salary.begin(), Salary.end());
        
        double AverageSalary = 0;
        int IntervalSize = Salary.size() - 2;
        
        for (int i = 1; i < Salary.size() - 1; i++)
        {
            AverageSalary += (double) Salary[i] / IntervalSize;
        }
        
        return AverageSalary;
    }
};