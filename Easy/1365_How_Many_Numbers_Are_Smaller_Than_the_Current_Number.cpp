/*
Given the array nums, for each nums[i] find out how many numbers in the array are smaller than it. That is, for each nums[i] you have to count the number of valid j's such that j != i and nums[j] < nums[i].

Return the answer in an array.
*/

class Solution
{
public:
    vector<int> smallerNumbersThanCurrent(vector<int> &nums)
    {
        vector<int> v;
        int small_count = 0;
        for (auto &x : nums)
        {
            for (auto &y : nums)
            {
                if (y < x)
                    small_count++;
            }
            v.push_back(small_count);
            small_count = 0;
        }

        return v;
    }
};