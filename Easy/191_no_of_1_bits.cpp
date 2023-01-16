/*
Write a function that takes an unsigned integer and returns the number of '1' bits it has (also known as the Hamming weight).

Note:

Note that in some languages, such as Java, there is no unsigned integer type. In this case, the input will be given as a signed integer type. It should not affect your implementation, as the integer's internal binary representation is the same, whether it is signed or unsigned.
In Java, the compiler represents the signed integers using 2's complement notation. Therefore, in Example 3, the input represents the signed integer. -3.
*/

/*
Approach : 1. traverse 32 times each time
            2. do & operation with n and if result is 1 increment count
            3. left shift 1 i times
            4. return  count
*/

class Solution
{
public:
    int hammingWeight(uint32_t n)
    {
        int total_count = 0;

        for (int i = 0; i < 32; i++)
        {
            if ((1 << i) & n)
                total_count++;
        }
        return total_count;
    }
};