class Solution {
public:
    int minimumDeviation(vector<int>& Nums) {
        set<int> Set;
        int Deviation;
        
        for (int Num: Nums)
        {
            Set.insert(Num);
        }
        
        Deviation = *Set.rbegin() - *Set.begin();
        int Previous = Deviation;
        
        while (true)
        {
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
                Set.insert(*Set.rbegin() / 2);
                Set.erase(*Set.rbegin());

                if (*Set.rbegin() - *Set.begin() < Deviation)
                {
                    Deviation = *Set.rbegin() - *Set.begin();
                }
            }
            
            break;

            if (*Set.begin() % 2 == 0 && *Set.rbegin() % 2 != 0)
            {
                break;
            }

            if (Previous == Deviation)
            {
                break;
            }

            Previous = Deviation;
        }
        
        return Deviation;
    }
    
    /* 
    1 3 4 5 20
    1 3 4 5 10
    1 3 4 5
    2 3 4 5
    
    2 8 10
    2 5 8
    2 4 5
    
    1 2 3 4
    1 2 3
    2 3
    
    3 4 10
    3 4 5
    4 5 6
    
    3 5
    5 6
    6 10
    */
};