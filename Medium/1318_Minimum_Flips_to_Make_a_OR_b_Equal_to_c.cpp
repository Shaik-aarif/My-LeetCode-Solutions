/*
Given 3 positives numbers a, b and c. Return the minimum flips required in some bits of a and b to make ( a OR b == c ). (bitwise OR operation).
Flip operation consists of change any single bit 1 to 0 or change the bit 0 to 1 in their binary representation.

*/

class Solution {
public:
// check for every ith bit if ci is set 
            // 1. change needed when both bits are set --> either of the bit is changes to 1
        // else ci is not set 
            // 1. if both bits are set unset them both
            // 1. any of ne bit is set then unset it 
// carry a ans variable to increment count of unset or set ops 
// return ans; 
    int minFlips(int a, int b, int c) {
            int ans = 0 ;
        for(int i = 0 ; i< 32 ; i++){
            int ai = (1<< i)&a;
            int bi = (1<< i)&b;
            int ci = (1<< i)&c;
            if(ci){
                if(!ai && !bi)ans++;
            }
            else{
                if(ai && bi)ans+=2;
                else if(ai || bi) ans++;
            }


        }
        return ans;
    }
};