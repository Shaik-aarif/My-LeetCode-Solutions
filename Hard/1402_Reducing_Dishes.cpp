/*
A chef has collected data on the satisfaction level of his n dishes. Chef can cook any dish in 1 unit of time.

Like-time coefficient of a dish is defined as the time taken to cook that dish including previous dishes multiplied by its satisfaction level i.e. time[i] * satisfaction[i].

Return the maximum sum of like-time coefficient that the chef can obtain after dishes preparation.

Dishes can be prepared in any order and the chef can discard some dishes to get this maximum value.
*/

class Solution {
public:
    int maxSatisfaction(vector<int>& satisfaction) {
        int ans_sum = 0 ;
        int curr_sum = 0 ;
        sort(satisfaction.begin() , satisfaction.end());
        reverse(satisfaction.begin() , satisfaction.end());

        for(auto x : satisfaction){
            curr_sum+=x;
            if(curr_sum <= 0){
                return ans_sum;
            }
            ans_sum+=curr_sum;
        }
        return ans_sum;
    }
};

