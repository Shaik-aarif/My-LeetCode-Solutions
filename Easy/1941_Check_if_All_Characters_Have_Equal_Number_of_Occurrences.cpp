/*
Given a string s, return true if s is a good string, or false otherwise.

A string s is good if all the characters that appear in s have the same number of occurrences (i.e., the same frequency).
*/

class Solution {
public:
    bool areOccurrencesEqual(string s) {
        map<char,int>mp;

        for(int i = 0 ; i< s.size() ;i++){
            mp[s[i]]++;
        }
        int c = mp[s[0]];
        for(auto x : mp){
            if(x.second != c){
                return false;
            }
        }
        return true;
    }
};

