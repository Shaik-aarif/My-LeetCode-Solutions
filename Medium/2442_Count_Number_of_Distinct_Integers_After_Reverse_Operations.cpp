/*
You are given an array nums consisting of positive integers.

You have to take each integer in the array, reverse its digits, and add it to the end of the array. You should apply this operation to the original integers in nums.

Return the number of distinct integers in the final array.
*/

/*
Approach : 1. initialize an unordered_set
            2. add all the elements of nums array to set
            3. reverse the number and insert into the set
            4. at last the size of the set would be the answer
            5. return size


*/

int revi(int n)
{
    int ans = 0;
    while (n)
    {
        ans = ans * 10 + (n % 10);
        n /= 10;
    }
    return ans;
}
class Solution
{
public:
    int countDistinctIntegers(vector<int> &nums)
    {
        unordered_set<int> s;
        for (auto &ele : nums)
        {
            s.insert(ele);
            s.insert(revi(ele));
        }

        return s.size();
    }
};