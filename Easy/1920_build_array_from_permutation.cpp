/*
Given a zero-based permutation nums (0-indexed), build an array ans of the same length where ans[i] = nums[nums[i]] for each 0 <= i < nums.length and return it.

A zero-based permutation nums is an array of distinct integers from 0 to nums.length - 1 (inclusive).
*/

/*
Approach : 1. initialize a vector of size same as nums
            2. traverse ans assign res[i] = nums[nums[i]];
            3. return res vector
*/

class Solution
{
public:
    vector<int> buildArray(vector<int> &nums)
    {

        vector<int> res(nums.size());

        for (int i = 0; i < nums.size(); i++)
        {
            res[i] = nums[nums[i]];
        }

        return res;
    }
};