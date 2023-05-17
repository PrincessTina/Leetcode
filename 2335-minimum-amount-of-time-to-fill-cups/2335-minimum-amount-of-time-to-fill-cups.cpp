class Solution {
public:
    int fillCups(vector<int>& Cups) {
        make_heap(Cups.begin(), Cups.end());
        
        int Steps = 0;
        while (Cups.front() != 0)
        {
            const int FirstCup = Cups.front();
            pop_heap(Cups.begin(), Cups.end());
            Cups.pop_back();
            
            const int SecondCup = Cups.front();
            if (SecondCup != 0)
            {
                pop_heap(Cups.begin(), Cups.end());
                Cups.pop_back();
                
                Cups.push_back(SecondCup - 1);
                push_heap(Cups.begin(), Cups.end());
            }
            
            Cups.push_back(FirstCup - 1);
            push_heap(Cups.begin(), Cups.end());
            
            Steps++;
        }
        
        return Steps;
    }
};