/*
Given an integer array nums of unique elements, return all possible 
subsets
 (the power set).

The solution set must not contain duplicate subsets. Return the solution in any order.
*/

class Solution {
private:
    void display(int idx , vector<int> &nums,vector<vector<int>> & ds , int n  , vector<int>level){
        
        if(idx == n ){
            ds.push_back(level);
            return ;
        }

        level.push_back(nums[idx]);
        display(idx+1 , nums , ds , n , level );
        level.pop_back();
        display(idx+1 , nums , ds , n  , level);
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n = nums.size();

        vector<vector<int>>ds;
        vector<int>level;

        display(0 , nums , ds ,  n , level );

        return ds;
    }
};