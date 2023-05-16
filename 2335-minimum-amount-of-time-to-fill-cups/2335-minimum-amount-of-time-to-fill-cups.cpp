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
    }
};