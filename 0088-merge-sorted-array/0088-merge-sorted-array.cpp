class Solution {
public:
    void merge(vector<int>& Nums1, int m, vector<int>& Nums2, int n) {
        int InsertionIndex = 0;
        
        for (int j = 0; j < n; j++)
        {
            int Num = Nums2[j];
            
            // Find insertion index
            while (true)
            {
                if (Num < Nums1[InsertionIndex])
                {
                    break;
                }
                
                if (Nums1[InsertionIndex] == 0 && InsertionIndex >= m + j)
                {
                    break;
                }
                
                if (InsertionIndex + 1 >= Nums1.size())
                {
                    break;
                }
                
                InsertionIndex++;
            }
            
            // Move elements to the right
            int Replacement = Nums1[InsertionIndex];
            Nums1[InsertionIndex] = Num;
            
            for (int i = InsertionIndex + 1; i < Nums1.size(); i++)
            {
                if (Replacement == 0 && InsertionIndex >= m + j)
                {
                    break;
                }
                
                const int Temp = Nums1[i];
                Nums1[i] = Replacement;
                Replacement = Temp;
            }
        }
    }
};