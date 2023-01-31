class Solution {
public:
    int numJewelsInStones(string Jewels, string Stones) {
        unordered_set<char> JewelTypes;
        int JewelNums = 0;
        
        for(char Jewel: Jewels)
        {
            JewelTypes.insert(Jewel);
        }
        
        for (char Stone: Stones)
        {
            JewelNums += JewelTypes.count(Stone);
        }
        
        return JewelNums;
    }
};