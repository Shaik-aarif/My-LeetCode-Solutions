/*

You are given a string s and an integer array indices of the same length. The string s will be shuffled such that the character at the ith position moves to indices[i] in the shuffled string.

Return the shuffled string.
*/

class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        map < int , char> m ;
        string ans = "";

        for(int i = 0 ; i< indices.size() ; i++){
            m.insert({indices[i] , s[i]});
        }

        for(auto &pr : m){
            ans+=pr.second;
        }
        

        return ans;

    }
};