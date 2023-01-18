/*
Given a valid (IPv4) IP address, return a defanged version of that IP address.

A defanged IP address replaces every period "." with "[.]".
*/

/*
Approach : 1. traverse through the string
            2. if u find . add [.] to new string
            3. else add the char itself to the new string
            4. return the new string

*/

class Solution
{
public:
    string defangIPaddr(string address)
    {
        string s = "[.]";
        string ans = "";

        for (int i = 0; i < address.size(); i++)
        {

            if (address[i] == '.')
            {
                ans += s;
            }
            else
            {
                ans += address[i];
            }
        }

        return ans;
    }
};