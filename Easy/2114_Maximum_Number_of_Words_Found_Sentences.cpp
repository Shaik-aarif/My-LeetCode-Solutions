
/*
A sentence is a list of words that are separated by a single space with no leading or trailing spaces.

You are given an array of strings sentences, where each sentences[i] represents a single sentence.

Return the maximum number of words that appear in a single sentence.
*/
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