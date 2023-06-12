/*
Given an integer array nums, return the most frequent even element.

If there is a tie, return the smallest one. If there is no such element, return -1.
*/

class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        map<int,int>mp;
        for(int i = 0 ; i<  nums.size() ; i++){
            if(nums[i] % 2 == 0){
                mp[nums[i]]++;
            }
        }
        int ans ;
        int maxi = INT_MIN;
        if(mp.empty())return -1;
        for(auto x : mp){
            if(x.second > maxi){
                maxi  = max(maxi , x.second);
                ans = x.first;
            }
        }
        return ans;
    }
};

