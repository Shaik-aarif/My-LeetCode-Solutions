/*
You are given a string title consisting of one or more words separated by a single space, where each word consists of English letters. Capitalize the string by changing the capitalization of each word such that:

If the length of the word is 1 or 2 letters, change all letters to lowercase.
Otherwise, change the first letter to uppercase and the remaining letters to lowercase.
Return the capitalized title.
*/

class Solution {
public:
    string capitalizeTitle(string title) {
        string s = "";
        for(int i =  0 ;i< title.size() ; i++){
           s+= tolower(title[i]);
        }

        int cap = 0;
        string ans = "";
        int cnt = 0 ;
        for(int i = 0 ; i<title.size() ;i++ ){
            
            if(s[i] != ' '){
                cnt++;
            }
            if(s[i] == ' ' || i==title.size()-1){
                if(cnt>2){
                s[cap]=toupper(s[cap]);
                cap =i+1;
                cnt = 0;
                } 
                else{
                    cap = i+1;
                    cnt = 0;
                }
            }
            
        }


        return s;
    }
};