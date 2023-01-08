

/*
Given an integer array nums and an integer val, remove all occurrences of val in nums in-place. The relative order of the elements may be changed.

Since it is impossible to change the length of the array in some languages, you must instead have the result be placed in the first part of the array nums. More formally, if there are k elements after removing the duplicates, then the first k elements of nums should hold the final result. It does not matter what you leave beyond the first k elements.

Return k after placing the final result in the first k slots of nums.

Do not allocate extra space for another array. You must do this by modifying the input array in-place with O(1) extra memory.
*/

/*


Approach : 1. traverse through the vector
`   `       2. if the element is equal to val then erase the element and decrement  the pointer
            3. return the size of the vector

Time complexity : worst time would be O(n) as we are trsversing once thoughout the vector

*/

class Solution
{
public:
    int removeElement(vector<int> &nums, int val)
    {

        for (auto i = nums.begin(); i != nums.end(); i++)
        {
            if ((*i) == val)
            {
                nums.erase(i);
                i--;
            }
        }

        return nums.size();
    }
};