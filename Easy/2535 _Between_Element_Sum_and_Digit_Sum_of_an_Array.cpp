/*
You are given a positive integer array nums.

The element sum is the sum of all the elements in nums.
The digit sum is the sum of all the digits (not necessarily distinct) that appear in nums.
Return the absolute difference between the element sum and digit sum of nums.

Note that the absolute difference between two integers x and y is defined as |x - y|.
*/

/*


*/

class Solution
{
public:
    int differenceOfSum(vector<int> &nums)
    {
        int ele_sum = 0;
        int digit_sum = 0;

        for (auto &x : nums)
        {
            ele_sum += x;
            while (x)
            {
                digit_sum += x % 10;
                x /= 10;
            }
        }

        return abs(ele_sum - digit_sum);
    }
};