/*
Given a positive integer n, find the pivot integer x such that:

The sum of all elements between 1 and x inclusively equals the sum of all elements between x and n inclusively.
Return the pivot integer x. If no such integer exists, return -1. It is guaranteed that there will be at most one pivot index for the given input.
*/

class Solution {
public:
    int pivotInteger(int n) {
       vector<int> v;
       int tsum = 0 ;
       for(int i =  1; i<=n; i++ ){
           v.push_back(i);
           tsum+=i;
       }
       
      int l = 0 ;
        int r = tsum;
       for( int i = 0 ; i<v.size() ;i++){
           if(i == 0){
               r-=0;
            l+=v[i];
           }else{

           r-=v[i-1];
           l+=v[i];
           }
         
           if(l==r){
               return i+1;
           }
       }
       return -1;


    }
};