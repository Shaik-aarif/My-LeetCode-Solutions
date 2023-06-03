/*
You are given an array of strings words and a string pref.

Return the number of strings in words that contain pref as a prefix.

A prefix of a string s is any leading contiguous substring of s.
*/

class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int ans = 0 ;
        for(auto str : words){
            if(str.substr(0,pref.size()) == pref){
                ans++;
            }
        }

        return ans; 
    }
};
