/*
Given a binary array nums, you should delete one element from it.

Return the size of the longest non-empty subarray containing only 1's in the resulting array. Return 0 if there is no such subarray.
*/

class Solution {
public:
    int longestSubarray(vector<int>& nums) {
         int  k = 1;
          int ans = 0 ;
        for(int i = 0  , j = 0 ; j<nums.size() ; j++){
            if(nums[j] == 0){
                k--;
            }

            while(k<0){
                if(nums[i]==0)k++;
                i++;
            }
        ans  = max(ans , (j-i));
        }

        return ans;
    }
};

