class Solution {
public:
    string interpret(string Command) {
        string Result = "";
        int i = 0;
        
        while (i < Command.size())
        {
            if (Command[i] == 'G')
            {
                i++;
                Result += 'G';
                continue;
            }
            
            if (Command[i] == '(' && Command[i + 1] == ')')
            {
                i += 2;
                Result += 'o';
                continue;
            }
            
            i += 4;
            Result += "al";
        }
        
        return Result;
    }
};