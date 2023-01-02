/*
Given an integer array nums, find three numbers whose product is maximum and return the maximum product.
*/

/*
APPROACH :  given only the product of three numbers we can do it in O(log n)

            1.sort the array
            2. ans1 = maximum product would be product of last three numbers
            3. ans2 = other max would be if theres negative numbers in the array
              product of first two and last element can also be a possible solution
            4. return maximum of ans1,ans2

TIME COMPLEXITY : O(log n ); // sort operation
*/
#include <bits/stdc++.h>
class Solution
{
public:
    int maximumProduct(vector<int> &nums)
    {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int ans1 = nums[0] * nums[1] * nums[n - 1];
        int ans2 = nums[n - 1] * nums[n - 2] * nums[n - 3];

        return max(ans1, ans2);
    }
};