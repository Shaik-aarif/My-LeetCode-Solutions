/*
You are given a 0-indexed integer array nums of even length consisting of an equal number of positive and negative integers.

You should rearrange the elements of nums such that the modified array follows the given conditions:

Every consecutive pair of integers have opposite signs.
For all integers with the same sign, the order in which they were present in nums is preserved.
The rearranged array begins with a positive integer.
Return the modified array after rearranging the elements to satisfy the aforementioned conditions.
*/

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
       int n = nums.size();
  
  
  vector<int> ans(n,0);
  
  
  int posIndex = 0, negIndex = 1;
  for(int i = 0;i<n;i++){
      
      
      if(nums[i]<0){
          ans[negIndex] = nums[i];
          negIndex+=2;
      }
      
     
      else{
          ans[posIndex] = nums[i];
          posIndex+=2;
      }
  }
  
  return ans;
    }
};