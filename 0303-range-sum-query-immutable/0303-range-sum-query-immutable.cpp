class NumArray {
public:
    NumArray(vector<int>& Nums) {
        Sum.push_back(Nums[0]);
        
        for (int i = 1; i < Nums.size(); i++)
        {
            Sum.push_back(Nums[i] + Sum[i - 1]);
        }
        
    }
    
    int sumRange(int Left, int Right) {
        if (Left == 0)
        {
            return Sum[Right];
        }
        
        return Sum[Right] - Sum[Left - 1];
    }
    
private:
    vector<int> Sum;
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */