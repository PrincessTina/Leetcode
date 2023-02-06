// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        long LeftBorder = 1;
        long RightBorder = n;
        long VersionIndex = 1;
        
        while (LeftBorder != RightBorder && RightBorder >= 1)
        {
            long Center = (LeftBorder + RightBorder) / 2;
            
            if (isBadVersion(Center))
            {
                VersionIndex = Center;
                RightBorder = Center;
            }
            else
            {
                LeftBorder = Center + 1;
            }
        }
        
        if (isBadVersion(LeftBorder))
        {
            VersionIndex = LeftBorder;
        }
        
        return VersionIndex;
    }
};