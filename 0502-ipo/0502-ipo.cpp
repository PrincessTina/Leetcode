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
        
        /*
        0 1 1 2 2 3 4 12
        1 6 2 0 3 2 5 10
    
        0,1 1,6 1,2 2,0 2,3 3,2 4,5 12,10
        */
        
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
        
        /*for (auto El: Temp)
        {
            Projects.push_back(Project(El.first, El.second));
            make_heap(Projects[Projects.size() - 1].Profits.begin(), Projects[Projects.size() - 1].Profits.end());
        }
        
        int Count = 0;
        while (Count < k)
        {
            const int Previous = Count;
            
            for (Project& TProject: Projects)
            {
                if (TProject.Capital <= Capital && TProject.Profits.size() > 0)
                {
                    Capital += TProject.Profits.front();
                    Count++;
                    
                    pop_heap(TProject.Profits.begin(), TProject.Profits.end());
                    TProject.Profits.pop_back();
                    
                    break;
                }
            }
            
            if (Count == Previous)
            {
                break;
            }
        }*/
        
        return Capital;
    }
    
private:
    /*0 1 1
    1 3 2
    
    0 1 1 2 2 3 4 12
    1 6 2 0 3 2 5 10
    
    0,1 1,6 1,2 2,0 2,3 3,2 4,5 12,10
    
    12 1 4 2 3 1 0 2
    10 6 5 4 2 2 1 0
    */
};