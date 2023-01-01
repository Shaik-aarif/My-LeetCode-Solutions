/*
You are given two integer arrays nums1 and nums2, sorted in non-decreasing order, and two integers m and n, representing the number of elements in nums1 and nums2 respectively.

Merge nums1 and nums2 into a single array sorted in non-decreasing order.

The final sorted array should not be returned by the function, but instead be stored inside the array nums1. To accommodate this, nums1 has a length of m + n, where the first m elements denote the elements that should be merged, and the last n elements are set to 0 and should be ignored. nums2 has a length of n.
*/

/*
APPROACH - 1 : 1. traverse the nums1 vector n times and removed zeroes
                2. add all elements of nums2 to  nums1
                3. sort nums1
                4.Print the vector

TIME COMPLEXITY :O(n)
*/

class Solution
{
public:
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
    {
        for (int i = 0; i < n; i++)
        {
            nums1.pop_back();
        }
        for (auto x : nums2)
        {
            nums1.push_back(x);
        }
        sort(nums1.begin(), nums1.end());

        for (auto x : nums1)
        {
            cout << x << " ";
        }
        cout << endl;
    }
};