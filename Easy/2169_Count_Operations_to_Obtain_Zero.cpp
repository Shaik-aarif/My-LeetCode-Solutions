/*
You are given two non-negative integers num1 and num2.

In one operation, if num1 >= num2, you must subtract num2 from num1, otherwise subtract num1 from num2.

For example, if num1 = 5 and num2 = 4, subtract num2 from num1, thus obtaining num1 = 1 and num2 = 4. However, if num1 = 4 and num2 = 5, after one operation, num1 = 4 and num2 = 1.
Return the number of operations required to make either num1 = 0 or num2 = 0.
*/

class Solution {
public:
    int countOperations(int num1, int num2) {
        int ans = 0;
        while(num1!=0 && num2!=0){
            if(max(num1,num2)==num1){
                num1-=num2;
                ans++;
            }
            else{
                num2-=num1;
                ans++;
            }
        }

        return ans;
    }
};