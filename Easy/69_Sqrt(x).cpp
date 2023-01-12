/*
Given a non-negative integer x, return the square root of x rounded down to the nearest integer. The returned integer should be non-negative as well.

You must not use any built-in exponent function or operator.

For example, do not use pow(x, 0.5) in c++ or x ** 0.5 in python.
*/

/*
Approach : we have to find the largest y which satisfies the equation fro given x
            sqrt(x) = y ;
            sobs
            x = y*y
            --> y*y <= x

            y= 0 ;
            increment y when the condition satisfies

            return y-1;

*/
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