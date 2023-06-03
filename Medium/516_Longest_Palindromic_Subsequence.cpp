/*
Given a string s, find the longest palindromic subsequence's length in s.

A subsequence is a sequence that can be derived from another sequence by deleting some or no elements without changing the order of the remaining elements.
*/



class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
       int m = text1.size();
       int n = text2.size();
       vector<vector<int>>dp(m+1 , vector<int>(n+1));
        
       for(int i = 0 ; i< m ; i++){
           for(int j = 0 ; j< n ; j++){
               if(text1[i] == text2[j]){
                   dp[i+1][j+1] = 1 + dp[i][j];
                   
               }
               else{
                   dp[i+1][j+1] = max(dp[i][j+1] , dp[i+1][j]);
               }
           }
       }
       
       return dp[m][n];
    }
    int longestPalindromeSubseq(string s) {
        
        string s2 = s;
        reverse(s2.begin() ,s2.end()); 

        return longestCommonSubsequence(s, s2);


    }
};