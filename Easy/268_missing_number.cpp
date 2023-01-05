/*
Given an array nums containing n distinct numbers in the range
[0, n], return the only number in the range that is missing from the array.
*/
/*
approach : 1.sorting the vector
           2.if every element is equal to its  index -> return  n value
            3. else -> return the index value
*/
/*
time complexity : O(n) as we are traversing the whole vector once .
*/

class Solution
{
public:
    int missingNumber(vector<int> &nums)
    {
        int n = nums.size();
        int ans;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < n; i++)
        {
            if (nums[i] != i)
            {
                ans = i;
                return ans;
            }
        }

        return n;
    }
};
