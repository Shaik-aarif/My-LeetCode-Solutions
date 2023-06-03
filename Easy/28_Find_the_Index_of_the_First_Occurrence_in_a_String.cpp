/*
Given two strings needle and haystack, return the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.
*/

class Solution {
public:
    int strStr(string haystack, string needle) {
        int n1 = haystack.size();
        int n2 = needle.size();

        for(int i =  0 ; i<=n1-n2;i++){
            string s = haystack.substr(i ,n2);
            if(s == needle){
                return i;
            }
        }
        return -1;
    }
};

