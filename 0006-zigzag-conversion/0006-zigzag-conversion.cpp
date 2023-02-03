class Solution {
public:
    string convert(string Word, int RowsCount) 
    {
        const int VLength = RowsCount * 2 - 2;
        
        if (VLength == 0)
        {
            return Word;
        }
        
        const int VCount = Word.size() / VLength;
        const int RestCount = Word.size() % VLength;
        int ColumnsCount = (VLength - RowsCount + 1) * VCount;   
        ColumnsCount += RestCount <= RowsCount ? 1 : RestCount - RowsCount + 1;

        char Matrix[RowsCount][ColumnsCount];
        int Index = 0;

        for (int j = 0; j < ColumnsCount; j++)
        {
            if (j % (RowsCount - 1) == 0)
            {
                for (int i = 0; i < RowsCount; i++)
                {
                    if (Index < Word.size())
                    {
                        Matrix[i][j] = Word[Index];
                        Index++;
                    }
                    else
                    {
                        Matrix[i][j] = '0';
                    }
                } 
            }
            else
            {
                for (int i = 0; i < RowsCount; i++)
                {
                    if (i == RowsCount - 1 - j % (RowsCount - 1))
                    {
                        Matrix[i][j] = Word[Index];
                        Index++;
                    }
                    else
                    {
                        Matrix[i][j] = '0';
                    }
                }
            }
        }

        string Result = "";

        for (int i = 0; i < RowsCount; i++)
        {
            for (int j = 0; j < ColumnsCount; j++)
            {
                if (Matrix[i][j] != '0')
                {
                    Result += Matrix[i][j];
                }
            }
        }
        
        return Result;
    }
};