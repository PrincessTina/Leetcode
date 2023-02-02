class Solution {
public:
    void merge(vector<int>& Nums1, int m, vector<int>& Nums2, int n) {
        for (int i = m; i < Nums1.size(); i++)
        {
            Nums1[i] = Nums2[i - m];
        }
        
        sort(Nums1.begin(), Nums1.end());
    }
};