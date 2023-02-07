
/*
You are given an array of strings names, and an array heights that consists of distinct positive integers. Both arrays are of length n.

For each index i, names[i] and heights[i] denote the name and height of the ith person.

Return names sorted in descending order by the people's heights.
*/

class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        map<int,string>m;
        vector<string>result;

        for(int i = 0 ; i< names.size();i++){
            m.insert({heights[i],names[i]});
        }

        sort(heights.rbegin() , heights.rend());

        for(int i =0 ; i<heights.size();i++){
            result.push_back(m[heights[i]]);
        }


        

        return result;

        
    }
};