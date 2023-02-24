class Solution {
public:
    int minimumDeviation(vector<int>& Nums) {
        set<int> Set;
        
        for (int Num: Nums)
        {
            Set.insert(Num);
        }
        
        int Deviation = *Set.rbegin() - *Set.begin();
        
        while (*Set.begin() % 2 != 0)
        {
            Set.insert(*Set.begin() * 2);
            Set.erase(*Set.begin());

            if (*Set.rbegin() - *Set.begin() < Deviation)
            {
                Deviation = *Set.rbegin() - *Set.begin();
            }
        }
        
        while (*Set.rbegin() % 2 == 0)
        {
            Set.insert(*Set.rbegin() * 0.5);
            Set.erase(*Set.rbegin());

            if (*Set.rbegin() - *Set.begin() < Deviation)
            {
                Deviation = *Set.rbegin() - *Set.begin();
            }
        }
        
        return Deviation;
    }
};