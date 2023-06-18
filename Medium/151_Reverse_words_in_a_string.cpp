class Solution {
public:
    string reverseWords(string s) {
        vector<string>v;
        string ans = "";
        int start ;
        int end;
        for(int i = 0 ; i< s.size() ;i++){
            if(s[i] != ' '){
                start = i ;
                break;
            }
        }
        for(int i = s.size()-1 ; i>=0 ; i--){
            if(s[i] != ' '){
                end = i;
                break;
            }
        }
        
        string str = "";
        for(int i = start ; i<=end ;i++ ){
            if(s[i]==' ' && s[i-1] == ' ')continue;
            if(s[i] == ' ' || i == end){
                if(i == end){
                    str+=s[i];
                }
                v.push_back(str);
                str.clear();
                continue;
            }
            str+=s[i];
        }

        reverse(v.begin() , v.end());
        
        for(int i = 0 ; i< v.size() ; i++){
            if(i == v.size()-1){
                ans+=v[i];
                break;
            }
            ans+=v[i];
            ans+=" ";
        }
        



        return ans;
    }
};