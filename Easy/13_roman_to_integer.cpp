/*
Roman numerals are represented by seven different symbols: I, V, X, L, C, D and M.

Symbol       Value
I             1
V             5
X             10
L             50
C             100
D             500
M             1000
For example, 2 is written as II in Roman numeral, just two ones added together. 12 is written as XII, which is simply X + II. The number 27 is written as XXVII, which is XX + V + II.

Roman numerals are usually written largest to smallest from left to right. However, the numeral for four is not IIII. Instead, the number four is written as IV. Because the one is before the five we subtract it making four. The same principle applies to the number nine, which is written as IX. There are six instances where subtraction is used:

I can be placed before V (5) and X (10) to make 4 and 9.
X can be placed before L (50) and C (100) to make 40 and 90.
C can be placed before D (500) and M (1000) to make 400 and 900.
Given a roman numeral, convert it to an integer.
*/

/*


Approach : 1. add the roman and integer pairs in a map
            2.store the value of last char in string in a variable total
            3.traverse from back of the string if value of that char is less ,
             then decrease from the total else increase
             4. return   total

time Complexity :  O(n) where n is size of the string
*/

class Solution
{
public:
    int romanToInt(string s)
    {
        unordered_map<char, int> m;
        m['I'] = 1;
        m['X'] = 10;
        m['V'] = 5;
        m['L'] = 50;
        m['C'] = 100;
        m['D'] = 500;
        m['M'] = 1000;

        int total = m[s[s.size() - 1]];

        for (int i = s.size() - 2; i >= 0; i--)
        {
            if (m[s[i]] < m[s[i + 1]])
            {
                total -= m[s[i]];
            }
            else
            {
                total += m[s[i]];
            }
        }

        return total;
    }
};