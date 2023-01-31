class Solution {
public:
    string defangIPaddr(string Address) {
        string DefangedAddress = "";
        
        for (char Letter: Address)
        {
            if (Letter == '.')
            {
                DefangedAddress += "[.]";
            }
            else
            {
                DefangedAddress += Letter;
            }
        }
        
        return DefangedAddress;
    }
};