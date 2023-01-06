/*
Given a 0-indexed integer array nums, find the leftmost middleIndex (i.e., the smallest amongst all the possible ones).

A middleIndex is an index where nums[0] + nums[1] + ... + nums[middleIndex-1] == nums[middleIndex+1] + nums[middleIndex+2] + ... + nums[nums.length-1].

If middleIndex == 0, the left side sum is considered to be 0. Similarly, if middleIndex == nums.length - 1, the right side sum is considered to be 0.

Return the leftmost middleIndex that satisfies the condition, or -1 if there is no such index.
*/

/*

Approach : 1.declare left = 0 and right as total sum of the array elements
            2. traverse from the beginning
                3. for each element remove element from the right var
                4. check if l == r --> if satisfies return i
                5. add element to left variable

            6. at last return -1 if not found any such index

Time complexity : O(n)


*/

class Solution
{
public:
    int findMiddleIndex(vector<int> &nums)
    {
        int l = 0;
        int r = 0;
        for (auto x : nums)
        {
            r += x;
        }
        for (int i = 0; i < nums.size(); i++)
        {
            r -= nums[i];
            if (l == r)
            {
                return i;
            }
            l += nums[i];
        }

        return -1;
    }
};