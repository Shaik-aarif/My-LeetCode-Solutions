/*

A sentence is a list of words that are separated by a single space with no leading or trailing spaces. Each word consists of lowercase and uppercase English letters.

A sentence can be shuffled by appending the 1-indexed word position to each word then rearranging the words in the sentence.

For example, the sentence "This is a sentence" can be shuffled as "sentence4 a3 is2 This1" or "is2 sentence4 This1 a3".
Given a shuffled sentence s containing no more than 9 words, reconstruct and return the original sentence
*/




class Solution {
public:
    string sortSentence(string s) {
       vector< pair<char ,string>>p;
        string temp ="";
        for(int i = 0 ; i< s.size() ; i++){
            if(isalpha(s[i])){
                temp+=s[i];
            }
            if(isdigit(s[i])){
                p.push_back({(s[i]) , temp});
                temp.clear();
            }
        } 
        string ans = "";

        sort(p.begin() , p.end());
        for(auto i : p){
            cout<<i.first<<" "<<i.second<<endl;
        }
        for(int i = 0 ; i< p.size() ; i++){
            ans+=p[i].second;
            if(i != p.size()-1){
                ans+=" ";
            }
        }
        // for( auto it : p){
        //     ans+=it.second;
        //     ans+=" ";
        // }
        return ans;
    }
};