

class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        map<int,string>m;
        vector<string>result;

        for(int i = 0 ; i< names.size();i++){
            m.insert({heights[i],names[i]});
        }

        sort(heights.rbegin() , heights.rend());

        for(int i =0 ; i<heights.size();i++){
            result.push_back(m[heights[i]]);
        }


        

        return result;

        
    }
};