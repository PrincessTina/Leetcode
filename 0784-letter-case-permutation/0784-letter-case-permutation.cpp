class Solution {
public:
    vector<string> letterCasePermutation(string String) {
        MakeString(String, 0);
        return Result;
    }
    
private:
    const char Diff = 'A' - 'a';
    vector<string> Result;
    
    void MakeString(string& String, int i)
    {
        while (i < String.size())
        {
            if (String[i] >= 'a' && String[i] <= 'z')
            {
                MakeString(String, i + 1);
                String[i] += Diff;
                MakeString(String, i + 1);
                
                break;
            }
            
            if (String[i] >= 'A' && String[i] <= 'Z')
            {
                MakeString(String, i + 1);
                String[i] -= Diff;
                MakeString(String, i + 1);
                
                break;
            }
            
            i++;
        }
        
        if (i == String.size())
        {
            Result.push_back(String);
        }
    }
};