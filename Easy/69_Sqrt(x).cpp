
class Solution
{
public:
    long long mySqrt(int x)
    {
        int y = 0;
        while (y * y <= x)
        {
            y++;
        }
        return y - 1;
    }
};