/*
You are given a string s consisting only of uppercase English letters.

You can apply some operations to this string where, in one operation, you can remove any occurrence of one of the substrings "AB" or "CD" from s.

Return the minimum possible length of the resulting string that you can obtain.

Note that the string concatenates after removing the substring and could produce new "AB" or "CD" substrings.

 
*/


class Solution {
public:
    int minLength(string s) {
        
    
    int n = s.length();
    

    int prev = n;
    int curr = n;

    do
    {
        if(curr<n){
            s[curr] = '1';
        }
        int i = 0;
        int j = 0;
        prev = curr;
        while (j < curr )
        {
            if(s[j] != 'A' && s[j] != 'C'){
                s[i] = s[j] ;
                i++;
                j++;
            }
            if(s[j] == 'A'){
                if(s[j+1] != 'B' ){
                    s[i] = s[j];
                    i++;j++;
                }
                else{
                    j+=2;
                }
            }
            if(s[j] == 'C'){
                if(s[j+1] != 'D' ){
                    s[i] = s[j];
                    i++;j++;
                }
                else{
                    j+=2;
                }
            }
        }
        curr = i;
    } while (prev != curr);

    return curr;

    }
};