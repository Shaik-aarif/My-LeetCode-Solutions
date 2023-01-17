/*
Given an integer n, return true if it is a power of two. Otherwise, return false.

An integer n is a power of two, if there exists an integer x such that n == 2x.
*/

/*
Approach : check 1. if negative return false
                2. if equal to 1 return true
                3. if odd return false
                4. no condition satisfies recursively return func(n/2);
*/
class Solution
{
public:
    bool isPowerOfTwo(int n)
    {
        if (n < 1)
            return false;
        if (n == 1)
            return true;
        if (n % 2 == 1)
            return false;
        return isPowerOfTwo(n / 2);
    }
};

