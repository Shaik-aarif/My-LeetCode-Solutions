
class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        map < int , char> m ;
        string ans = "";

        for(int i = 0 ; i< indices.size() ; i++){
            m.insert({indices[i] , s[i]});
        }

        for(auto &pr : m){
            ans+=pr.second;
        }
        

        return ans;

    }
};