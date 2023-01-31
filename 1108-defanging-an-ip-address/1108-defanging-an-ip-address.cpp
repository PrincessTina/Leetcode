class Solution {
public:
    string defangIPaddr(string Address) {
        string DefangedAddress = Address;
        
        for (int i = Address.size() - 1; i > 0; i--)
        {
            if (Address[i] == '.')
            {
                DefangedAddress.replace(i, 1, "[.]");
            }
        }
        
        return DefangedAddress;
    }
};