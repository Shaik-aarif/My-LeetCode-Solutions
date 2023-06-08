/*
Given an integer numRows, return the first numRows of Pascal's triangle.

In Pascal's triangle, each number is the sum of the two numbers directly above it as shown:
*/

class Solution {
private:
    vector<int> generateRows(int row){
        vector<int> ansRow ;
        long long ans = 1;
        ansRow.push_back(1);
        for(int col=1 ; col<row ; col++ ){
            ans *= (row-col);
            ans/=col;
            ansRow.push_back(ans);
        }
        return ansRow;
    }
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        for(int i = 1 ; i <=numRows ; i++){

        ans.push_back(generateRows(i));
        }
      
        return ans;
    }
};

