/*
Given an array of positive integers nums, return an array answer that consists of the digits of each integer in nums after separating them in the same order they appear in nums.

To separate the digits of an integer is to get all the digits it has in the same order.

For example, for the integer 10921, the separation of its digits is [1,0,9,2,1].
*/

class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int>ans;
        vector<int>dummy;
        for(auto x : nums){
            while(x){
                int digit = x%10;
                dummy.push_back(digit);
                x/=10;
            }
            reverse(dummy.begin() , dummy.end());
            for(auto x : dummy){

            ans.push_back(x);
            }
            dummy.clear();
        }
    
        return ans;
    }
};