/*
Given an array nums of size n, return the majority element.

The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.

*/

/*
APPROACh : 1. calculate the frequency of every element in the vector using map
            2. return the element with higher frequency

TIME COMPLEXITY : O(log n )

*/

class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        map<int, int> m;
        for (int i = 0; i < nums.size(); i++)
        {
            m[nums[i]]++;
        }
        int mx = INT_MIN;
        int ans;
        for (auto i = m.begin(); i != m.end(); i++)
        {
            if (i->second > mx)
            {
                mx = i->second;
                ans = i->first;
            }
        }

        return ans;
    }
};