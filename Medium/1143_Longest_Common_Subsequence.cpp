/*
Given two strings text1 and text2, return the length of their longest common subsequence. If there is no common subsequence, return 0.

A subsequence of a string is a new string generated from the original string with some characters (can be none) deleted without changing the relative order of the remaining characters.

For example, "ace" is a subsequence of "abcde".
A common subsequence of two strings is a subsequence that is common to both strings.
*/

class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
       int m = text1.size();
       int n = text2.size();
       vector<vector<int>>dp(m+1 , vector<int>(n+1));
        string s = "";
       for(int i = 0 ; i< m ; i++){
           for(int j = 0 ; j< n ; j++){
               if(text1[i] == text2[j]){
                   dp[i+1][j+1] = 1 + dp[i][j];
                   s+=text1[i];
               }
               else{
                   dp[i+1][j+1] = max(dp[i][j+1] , dp[i+1][j]);
               }
           }
       }
        cout<<s;
       return dp[m][n];
    }
};

