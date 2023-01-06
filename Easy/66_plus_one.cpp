/*
You are given a large integer represented as an integer array digits, where each digits[i] is the ith digit of the integer. The digits are ordered from most significant to least significant in left-to-right order. The large integer does not contain any leading 0's.

Increment the large integer by one and return the resulting array of digits.
*/

/*
Approach : 1.traverse from the end
            2. if u find 9 change it to 0 and else increment the number and return the vector

            3.#special case
                if the vector contains only 9's then add an extra zero at the end
                and change 1st digit to one

Time complexity : O(n);

*/

class Solution
{
public:
    vector<int> plusOne(vector<int> &digits)
    {
        for (int i = digits.size() - 1; i >= 0; i--)
        {
            if (digits[i] == 9)
            {
                digits[i] = 0;
            }
            else
            {
                digits[i]++;
                break;
            }

            if (digits[0] == 0)
            {
                digits.push_back(0);
                digits[0] = 1;
                return digits;
            }
        }

        return digits;
    }
};