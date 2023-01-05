/*
Given a sorted array of distinct integers and a target value, return
the index if the target is found. If not, return the index where it would be if it were inserted in order.

You must write an algorithm with O(log n) runtime complexity.
*/

/*
Time complexity : O(n)
APPROACH 1  : 1.traverse the whole vector
            2. if target is found return its index
            3. if element is bigger than target return its index
            4. if no above conditions met return size of vector
                as the target value will be inserted at the end of the vector :)
*/

class Solution
{
public:
    int searchInsert(vector<int> &nums, int target)
    {

        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == target)
            {
                return i;
            }
            else if (nums[i] > target)
            {
                return i;
            }
        }
        return nums.size();
    }
};

/*
To reduce  Time complexity we can go towards Binary search implementation
Then it would be O(log n);
*/