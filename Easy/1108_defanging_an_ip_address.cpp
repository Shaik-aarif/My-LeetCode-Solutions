
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