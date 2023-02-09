/*
Given an integer array nums, return the greatest common divisor of the smallest number and largest number in nums.

The greatest common divisor of two numbers is the largest positive integer that evenly divides both numbers.

 
*/

class Solution {
public:
    int findGCD(vector<int>& nums) {

        
        return __gcd(*max_element(nums.begin(), nums.end()),*min_element(nums.begin(), nums.end()));
        
    }
};

