class Solution {
public:
    int fillCups(vector<int>& Cups) {
        make_heap(Cups.begin(), Cups.end());
        
        int Steps = 0;
        while (true)
        {
            const int FirstCup = Cups.front();
            pop_heap(Cups.begin(), Cups.end());
            Cups.pop_back();
            
            const int SecondCup = Cups.front();
            pop_heap(Cups.begin(), Cups.end());
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