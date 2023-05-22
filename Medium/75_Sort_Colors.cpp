/*
Given an array nums with n objects colored red, white, or blue, sort them in-place so that objects of the same color are adjacent, with the colors in the order red, white, and blue.

We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively.

You must solve this problem without using the library's sort function
*/

class Solution {
public:
    void swap( int *a , int *b ){
    int temp = *a ;
    *a = *b ;
    *b = temp;
}


    void sortColors(vector<int>& nums) {
       int l = 0 ;
        int r = nums.size()-1;
        int m = 0 ;

    int j = -1 ;

    int k = 0 ;
    while(k<3){

    for(int i = nums.size()-1; i>=0 ; i--){
        if(nums[i] == k){
            j = i;
            break;
        }
    }

    for(int i = j-1 ; i >=0 ; i--){
        if(nums[i] > nums[j] ){
            swap(&nums[i] ,&nums[j] );
            j--;
        }
    }
    k++;
    }



    for(auto x : nums){
        cout<<x<<" ";
    } 
    }
};