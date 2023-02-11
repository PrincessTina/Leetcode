class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& Image, int SR, int SC, int Color) {
        OldColor = Image[SR][SC];
        NewColor = Color;
        
        if (OldColor != NewColor)
        {
            Stack.push({SR, SC});
            Recolor(Image, SR, SC);
        }
        
        return Image;
    }
    
private:
    stack<pair<int, int>> Stack;
    int OldColor;
    int NewColor;
    
    void Recolor(vector<vector<int>>& Image, int i, int j)
    {
        Image[i][j] = NewColor;
        Stack.pop();
        
        if (i - 1 >= 0 && Image[i - 1][j] == OldColor)
        {
            Stack.push({i - 1, j});
        }
        
        if (i + 1 < Image.size() && Image[i + 1][j] == OldColor)
        {
            Stack.push({i + 1, j});
        }
        
        if (j - 1 >= 0 && Image[i][j - 1] == OldColor)
        {
            Stack.push({i, j - 1});
        }
        
        if (j + 1 < Image[0].size() && Image[i][j + 1] == OldColor)
        {
            Stack.push({i, j + 1});
        }
        
        if (Stack.empty())
        {
            return;
        }
        
        Recolor(Image, Stack.top().first, Stack.top().second);
    }
};