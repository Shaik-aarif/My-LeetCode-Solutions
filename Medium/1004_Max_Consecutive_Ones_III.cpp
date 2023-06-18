/*
Given a binary array nums and an integer k, return the maximum number of consecutive 1's in the array if you can flip at most k 0's.
*/

class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int ans = 0 ;
        for(int i = 0  , j = 0 ; j<nums.size() ; j++){
            if(nums[j] == 0){
                k--;
            }

            while(k<0){
                if(nums[i]==0)k++;
                i++;
            }
        ans  = max(ans , (j-i+1));
        }

        return ans;
    }
};

