/*
You are given a positive integer n. Each digit of n has a sign according to the following rules:

The most significant digit is assigned a positive sign.
Each other digit has an opposite sign to its adjacent digits.
Return the sum of all digits with their corresponding sign.
*/

class Solution {
public:
    int alternateDigitSum(int n) {
       vector<int>v;
       int ans = 0 ;

       while(n){
           int digit = n%10;
           v.push_back(digit);
           n/=10;
       } 
       reverse(v.begin() , v.end());

       for(int i = 0 ; i<v.size() ; i++){
           if(i%2==0){
               ans+=v[i];
           }else{
               ans-=v[i];
           }
       }

       return ans;
    }
};
