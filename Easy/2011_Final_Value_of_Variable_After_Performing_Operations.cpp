/*
There is a programming language with only four operations and one variable X:

++X and X++ increments the value of the variable X by 1.
--X and X-- decrements the value of the variable X by 1.
Initially, the value of X is 0.

Given an array of strings operations containing a list of operations, return the final value of X after performing all the operations.
*/

/*
Approach : 1. traverse through the vector
            2.declare int x = 0
            3. if element is x-- or --x decrement
                    else increment
            4. return int x.
*/

class Solution
{
public:
    int finalValueAfterOperations(vector<string> &operations)
    {
        int x = 0;

        string c = "X--";
        string d = "--X";
        for (int i = 0; i < operations.size(); i++)
        {
            if (operations[i] == c || operations[i] == d)
            {
                x--;
            }
            else
            {
                x++;
            }
        }

        return x;
    }
};