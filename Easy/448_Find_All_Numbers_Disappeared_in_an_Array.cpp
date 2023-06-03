/*
Given an array nums of n integers where nums[i] is in the range [1, n], return an array of all the integers in the range [1, n] that do not appear in nums.
*/

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
      
        vector<int>ans;
        vector<int>d(nums.size()+1 , 0) ;
        for(int i = 0 ; i< nums.size() ; i++){
            d[nums[i]]++;
        }
        
        for(int i = 1 ; i< d.size() ; i++){
            if(d[i]== 0){
                ans.push_back(i);
            }
        }
        return ans;
    }
};

