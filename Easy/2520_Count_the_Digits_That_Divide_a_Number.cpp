/*
Given an integer num, return the number of digits in num that divide num.

An integer val divides nums if nums % val == 0.


*/

class Solution
{
public:
    int countDigits(int num)
    {
        int digit_c = 0;
        int dup_num = num;
        while (num)
        {
            int ld = num % 10;
            if (dup_num % ld == 0)
            {
                digit_c++;
            }
            num /= 10;
        }

        return digit_c;
    }
};