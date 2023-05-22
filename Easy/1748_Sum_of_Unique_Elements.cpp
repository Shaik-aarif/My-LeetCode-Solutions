/*
You are given an integer array nums. The unique elements of an array are the elements that appear exactly once in the array.

Return the sum of all the unique elements of nums.
*/

class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        map<int , int> mp;

        for(int i = 0 ; i< nums.size() ; i++){
            mp[nums[i]]++;
        }
        int sum = 0 ;
        for(auto x : mp){
            if(x.second ==1){
                sum+=x.first;
            }
        }

        return sum;
    }
};

