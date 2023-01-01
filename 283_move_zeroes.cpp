/*
Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.

Note that you must do this in-place without making a copy of the array.
*/

/*
approach : Quick sort approach
            1. traverse through the vector and swap non zero with a zero
            2.print the vector
*/
class Solution
{
public:
    void moveZeroes(vector<int> &nums)
    {

        int l = 0;
        for (int r = 0; r < nums.size(); r++)
        {
            if (nums[r] != 0)
            {
                int temp = nums[l];
                nums[l] = nums[r];
                nums[r] = temp;

                l++;
            }
        }

        for (auto x : nums)
        {
            cout << x << " ";
        }
        cout << endl;
    }
};