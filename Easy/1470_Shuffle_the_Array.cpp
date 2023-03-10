/*
Given the array nums consisting of 2n elements in the form [x1,x2,...,xn,y1,y2,...,yn].

Return the array in the form [x1,y1,x2,y2,...,xn,yn]
*/

class Solution
{
public:
    vector<int> shuffle(vector<int> &nums, int n)
    {
        // vector<int> h1;
        // vector<int> h2;
        vector<int> ans;

        // for(int i = 0 ; i< n ; i++){
        //     h1.push_back(nums[i]);
        // }
        // for(int i = n ; i< 2*n ; i++){
        //     h2.push_back(nums[i]);
        // }

        // for(int i = 0 ; i<n ; i++){
        //     ans.push_back(h1[i]);
        //     ans.push_back(h2[i]);
        // }

        for (int i = 0, j = n; i < n, j < 2 * n; i++, j++)
        {
            ans.push_back(nums[i]);
            ans.push_back(nums[j]);
        }

        return ans;
    }
};