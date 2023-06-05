/*
Given an array of distinct integers candidates and a target integer target, return a list of all unique combinations of candidates where the chosen numbers sum to target. You may return the combinations in any order.

The same number may be chosen from candidates an unlimited number of times. Two combinations are unique if the 
frequency
 of at least one of the chosen numbers is different.

The test cases are generated such that the number of unique combinations that sum up to target is less than 150 combinations for the given input.
*/

class Solution {
public:
    void generateCombinations(int idx , vector<int> &candidates , int n , int target , vector<int> &ds , vector<vector<int>> &ans){

        if( idx == n){
            if(target == 0){
                ans.push_back(ds);
            }
                return ;
        }

        // pick condition

        if(candidates[idx] <= target){
            ds.push_back(candidates[idx]);
            generateCombinations(idx , candidates , n , target - candidates[idx] , ds ,ans );
            ds.pop_back();
        }
        generateCombinations(idx+1 , candidates  , n , target , ds, ans);

    }
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {

        vector<vector<int>>ans;
        vector<int>ds;
        int n = candidates.size();

        generateCombinations( 0 , candidates , n , target , ds, ans );

        return ans;
        
    }
};