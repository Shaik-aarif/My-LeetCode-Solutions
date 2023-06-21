class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int pre = 1;
        int suf = 1;
        int ans = INT_MIN;
        int n = nums.size();
        for(int i = 0  ; i< nums.size() ; i++){
            if(pre == 0 )pre = 1;
            if(suf == 0 )suf = 1;
            
            pre = pre*nums[i];
            suf= suf*nums[n-i-1];

            ans = max(ans , max(pre, suf));

        }
        return ans;
    }
};