class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& Nums1, vector<int>& Nums2) {
        unordered_map<int, int> Map;
        stack<int> Stack;
        vector<int> Result;
        
        for (int i = 0; i < Nums1.size(); i++)
        {
            Result.push_back(-1);
            Map.insert({Nums1[i], i});
        }
        
        for (int i = 0; i < Nums2.size(); i++)
        {
            while (!Stack.empty() && Nums2[i] > Stack.top())
            {
                if (Map.count(Stack.top()) != 0)
                {
                    Result[Map[Stack.top()]] = Nums2[i];
                }
                
                Stack.pop();
            }
            
            Stack.push(Nums2[i]);
        }
        
        return Result;
    }
};