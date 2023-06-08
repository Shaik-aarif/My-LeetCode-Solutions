/*
Given an integer rowIndex, return the rowIndexth (0-indexed) row of the Pascal's triangle.

In Pascal's triangle, each number is the sum of the two numbers directly above it as shown:
*/

class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> res;
        res.push_back(1);
        long long ans  =1;
        for(int col = 1 ; col<rowIndex+1 ; col++ ){
            ans*=(rowIndex+1-col);
            ans/=col;
            res.push_back(ans);
        } 

        return res;
    }
};


