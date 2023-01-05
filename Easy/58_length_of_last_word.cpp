/*
Given a string s consisting of words and spaces, return the length of the last word in the string.

A word is a maximal
substring
 consisting of non-space characters only.
*/

/*
APPROACH  : 1. if last element is not space
                start traversing and increse the count until a space occurs
                --> return the count

            2. if last element is space
                traverse and count no of spaces
                and then again traverse leaving the spaces
                and repeate the above process
                -->return the count


TIME COMPLEXITY :3*O(n) -->  < [O(n)]


*/

class Solution
{
public:
    int lengthOfLastWord(string s)
    {
        int space_c = 0;
        int c = 0;
        int n = s.length();
        if (s[n - 1] == ' ')
        {
            for (int i = n - 1; i >= 0; i--)
            {
                if (s[i] == ' ')
                {
                    space_c++;
                }
                else
                {
                    break;
                }
            }
            for (int i = n - 1 - space_c; i >= 0; i--)
            {
                if (s[i] == ' ')
                {
                    break;
                }
                else
                {
                    c++;
                }
            }
        }
        else
        {
            for (int i = n - 1; i >= 0; i--)
            {

                if (s[i] == ' ')
                {
                    break;
                }
                else
                {

                    c++;
                }
            }
        }

        return c;
    }
};