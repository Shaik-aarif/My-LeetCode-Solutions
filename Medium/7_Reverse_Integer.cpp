/*

Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.

Assume the environment does not allow you to store 64-bit integers (signed or unsigned).
*/



class Solution {
public:
    int reverse(int x) {
        
        long num = x;
        long rem = 0 ;

        while(num != 0){
            rem = rem*10 +num%10;
            num/=10;
        }

        if(rem < -pow(2, 31) || rem > pow(2, 31)){
            return 0 ;
        }



        return rem;
    }
};