class Solution {
public:
    int fillCups(vector<int>& Cups) {
        make_heap(Cups.begin(), Cups.end());
        
        int Steps = 0;
        while (true)
        {
            pop_heap(Cups.begin(), Cups.end());
            const int FirstCup = Cups.back();
            Cups.pop_back();
            
            pop_heap(Cups.begin(), Cups.end());
            const int SecondCup = Cups.back();
            Cups.pop_back();
            
            if (FirstCup == 0 && SecondCup == 0)
            {
                break;
            }
            
            Cups.push_back(FirstCup - 1);
            push_heap(Cups.begin(), Cups.end());
            Cups.push_back(SecondCup != 0 ? SecondCup - 1 : 0);
            push_heap(Cups.begin(), Cups.end());
            
            Steps++;
        }
        
        return Steps;
        
        // 4, 2, 1
        
        // 5, 4, 4
        
        // 4,4,3
        // 3,3,3
        // 2,2,3
        // 2,1,2
        // 1,1,1
        // 0,0,1
        // 0,0,0
        
        // 5,4,4
        
        // 4,3,4
        // 3,2,4
        // 2,1,4
        // 1,0,4
        // 0,0,3
        // 0,0,2
        // 0,0,1
        // 0,0,0
    }
};