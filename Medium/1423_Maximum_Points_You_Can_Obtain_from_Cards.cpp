class Solution {
public:


    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size();
        int t_sum = 0 ;
        int ans = INT_MIN;
        for(int i = 0 ; i< n ; i++){
            t_sum+=cardPoints[i];
        }
            int wsum = 0 ;
        for(int i = 0 ; i < n-k ;i++){
            wsum+=cardPoints[i];
        }
        int l = 0 ;
        int r = n-k ;
        ans = max(ans , t_sum-wsum);
        for(int i = r ; i< n ; i++){
            wsum+=cardPoints[i];
            wsum-=cardPoints[l];
            l++;

            ans = max(ans , t_sum-wsum);
        }
        return ans;

    }
};