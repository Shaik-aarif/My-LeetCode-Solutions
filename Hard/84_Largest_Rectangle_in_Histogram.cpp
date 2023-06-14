/*
Given an array of integers heights representing the histogram's bar height where the width of each bar is 1, return the area of the largest rectangle in the histogram.
*/

class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int>st;
        int n = heights.size();
        int leftSmaller[n];
        int rightSmaller[n];
        // for left smaller
        for(int i = 0 ; i<  n ; i++){

            while(!st.empty() && heights[st.top()] >= heights[i]){
                st.pop();
            }
            if(st.empty()){
                leftSmaller[i] = 0 ;
            }
            else{
                leftSmaller[i] = st.top()+1;
            }
            st.push(i);
        }


        while(!st.empty())st.pop();

        for(int i = n-1 ; i>= 0; i--){

            while(!st.empty() && heights[st.top()] >= heights[i]){
                st.pop();
            }
            if(st.empty()){
                rightSmaller[i] = n-1 ;
            }
            else{
                rightSmaller[i] = st.top()-1;
            }
            st.push(i);
        }

        int maxA = INT_MIN;

        for(int i = 0 ; i< n ; i++){
            maxA= max(maxA , (rightSmaller[i] - leftSmaller[i]+1)*heights[i] );
        }

        return maxA;
        
    }
};

