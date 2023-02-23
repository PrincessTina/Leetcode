class Solution {
public:
    int findMaximizedCapital(int k, int Capital, vector<int>& Profits, vector<int>& Capitals) {
        vector<pair<int, int>> Projects;
        vector<int> Heap;
        make_heap(Heap.begin(), Heap.end());
        
        for (int i = 0; i < Capitals.size(); i++)
        {
            Projects.push_back({Capitals[i], Profits[i]});
        }
        
        sort(Projects.begin(), Projects.end(), [](const pair<int, int>& Project1, const pair<int, int>& Project2)
        {
            return Project1.first < Project2.first;
        });
        
        int Count = 0;
        int Iterator = 0;
        
        while (Count < k)
        {
            for (int i = Iterator; i < Projects.size(); i++)
            {
                if (Projects[i].first > Capital)
                {
                    Iterator = i;
                    break;
                }
                
                Heap.push_back(Projects[i].second);
                push_heap(Heap.begin(), Heap.end());
                
                if (i == Projects.size() - 1)
                {
                    Iterator = i + 1;
                    break;
                }
            }
            
            if (Heap.size() == 0)
            {
                return Capital;
            }
            
            Capital += Heap.front();
            pop_heap(Heap.begin(), Heap.end());
            Heap.pop_back();
            Count++;
        }
        
        return Capital;
    }
};