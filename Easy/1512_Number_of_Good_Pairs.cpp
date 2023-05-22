/* 
Given an array of integers nums, return the number of good pairs.

A pair (i, j) is called good if nums[i] == nums[j] and i < j.
*/




class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        map<int , int>mp;

        for(int i = 0 ; i< nums.size() ; i++){
            mp[nums[i]]++;
        }
        int ans = 0 ;
        for(auto x : mp){
            if(x.second >1){
                int t = x.second;
                t--;
                ans+=((t*(t+1))/2);
            }
        }

    
        return ans;
    }
};