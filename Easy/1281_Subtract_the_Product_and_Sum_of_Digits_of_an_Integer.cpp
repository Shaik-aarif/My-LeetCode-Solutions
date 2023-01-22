class Solution
{
public:
    int subtractProductAndSum(int n)
    {
        int p = 1;
        int s = 0;
        while (n)
        {
            s += n % 10;
            p *= n % 10;
            n /= 10;
        }
        return abs(s - p);
    }
};