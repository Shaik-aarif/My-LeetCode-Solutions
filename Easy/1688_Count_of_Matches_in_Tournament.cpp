class Solution
{
public:
    int numberOfMatches(int n)
    {
        int total_matches = 0;

        while (n != 1)
        {
            if (n % 2 != 0)
            {
                n /= 2;
                total_matches += n;
                n++;
            }
            else
            {
                n /= 2;
                total_matches += n;
            }
        }

        return total_matches;
    }
};