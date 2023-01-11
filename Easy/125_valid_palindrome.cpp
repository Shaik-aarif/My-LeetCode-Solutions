/*
A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.

Given a string s, return true if it is a palindrome, or false otherwise.
*/

/*
APProach : 1. take two variables and traverse from starting and ending of that given string
            2. we will consider only alnum characters
            3. if char is other than that we will increment if start and decrement if end pointers
            4. and compare the chars if not same return false
            5. if none of the conditions met return true
            6. we have to add a case where if the length of the string is 1 or empty we have to return true
            as empty string and single character is also a palindrome

Time Complexity : O(n) n -> length of the string
Space : O(1);
*/

#include <bits/stdc++.h>
#include <cctype>
class Solution
{
public:
    bool isPalindrome(string s)
    {
        if (s.size() <= 1)
            return true;
        int begin = 0;
        int end = s.size() - 1;

        while (begin < end)
        {
            while (begin < end && !isalnum(s[begin]))
                begin++;
            while (begin < end && !isalnum(s[end]))
                end--;
            if (begin < end && tolower(s[begin]) != tolower(s[end]))
            {
                return false;
            }
            begin++;
            end--;
        }
        return true;
    }
};