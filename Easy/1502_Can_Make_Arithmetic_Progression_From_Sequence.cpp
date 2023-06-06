/*
A sequence of numbers is called an arithmetic progression if the difference between any two consecutive elements is the same.

Given an array of numbers arr, return true if the array can be rearranged to form an arithmetic progression. Otherwise, return false.
*/

class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        sort(arr.begin() ,arr.end());
        int ap = abs(arr[0] - arr[1]);
        for(int i = 1 ; i< arr.size() ; i++){
            if(abs(arr[i] - arr[i-1]) != ap  ){
                return false;
            }
        }


        return true;
    }
};

