class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>leftPre(nums.size() , 1);
        vector<int>rightPre(nums.size() , 1);
        int n = nums.size();
        int lp = 1;
        int rp = 1;
        for(int i = 0 ; i< n ; i++){
            lp= lp*nums[i];
            leftPre[i] = lp;
            rp = rp* nums[n-i-1];
            rightPre[n-i-1] = rp;
        }
         vector<int>ans(n , 1);
        for(int i = 0 ; i< n ; i++){
            if(i == 0 ){
                ans[i] = rightPre[i+1];
            }
            else if (i == n-1){
                ans[i] = leftPre[i-1];
            }
            else{
                ans[i] = leftPre[i-1]*rightPre[i+1];
            }
        }
        return ans;
    }
};