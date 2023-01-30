

class Solution
{
public:
    vector<int> smallerNumbersThanCurrent(vector<int> &nums)
    {
        vector<int> v;
        int small_count = 0;
        for (auto &x : nums)
        {
            for (auto &y : nums)
            {
                if (y < x)
                    small_count++;
            }
            v.push_back(small_count);
            small_count = 0;
        }

        return v;
    }
};