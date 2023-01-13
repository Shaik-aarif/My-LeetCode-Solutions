/*
Given two binary strings a and b, return their sum as a binary string.
*/

/*
Approach : 1. declare an empty string variable
            2. traverse from the end until we reach til the end of the largest string
            3. declare sum and carry variables with zero initially
            4. for each traversal sum = carry + a[i] + a[j]
            5. make sure to change ASCI values to integer by subtracting '0' from the char  // a[i]-'0';  '1' = 31 -->  '1' - '0' = 31 -30 = 1
                                    '0' = 30 -->  '0' - '0' = 30 -30 = 0
            6. if sum is even add 1 to string else zero to string res
            7. for carry divide it by two  1/2 -> 0
                                           2/2 -> 1
                                           3/2 -> 1
            8. after complete traversal if carry is one add  it to the string
            9. reverse the res
            10. return the res

Time Complexity : x = max(a.size(), b.size());
                O(x);

            */
class Solution
{
public:
    string addBinary(string a, string b)
    {
        string res;
        int i = a.size() - 1;
        int j = b.size() - 1;
        int sum;
        int carry = 0;
        while (i >= 0 || j >= 0)
        {
            sum = carry;
            if (i >= 0)
                sum += a[i] - '0';
            if (j >= 0)
                sum += b[j] - '0';
            res += to_string(sum % 2);
            carry = sum / 2;
            i--, j--;
        }
        if (carry != 0)
            res += '1';

        reverse(res.begin(), res.end());
        return res;
    }
};