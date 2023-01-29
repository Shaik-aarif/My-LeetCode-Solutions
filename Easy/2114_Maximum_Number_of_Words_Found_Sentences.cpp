

class Solution
{
public:
    int mostWordsFound(vector<string> &sentences)
    {
        int sp_c = 0;
        int ans = INT_MIN;
        for (int i = 0; i < sentences.size(); i++)
        {
            for (int j = 0; j < sentences[i].size(); j++)
            {
                if (sentences[i][j] == ' ')
                {
                    sp_c++;
                }
            }
            sp_c++;

            if (sp_c > ans)
                ans = sp_c;
            sp_c = 0;
        }

        return ans;
    }
};