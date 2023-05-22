/*
Given an integer array nums, rotate the array to the right by k steps, where k is non-negative.
*/

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> ans;
        int n = nums.size();
        k%=n;

        
        int j = n-1;
        int x ;
        // while(k--){
        //     x = nums[j];
        //     for(int i = n-1 ; i>0 ; i-- ){
        //         nums[i] = nums[i-1];
        //     }
        //     nums[0] = x;
        // }
        // int temp[k];
        // int j =  0 ;

        
        vector<int>temp;
        for(int i = n-k ; i<n ; i++){
            temp.push_back(nums[i]);
        }
        for(int i = n-1 ;i>=k ;i--){
            nums[i] = nums[i-k];
        }
        for(int i = 0 ; i<k ; i++){
            nums[i] = temp[i];
        }



        for(auto x : nums){
            cout<<x<<" ";
        }

       
    }
};