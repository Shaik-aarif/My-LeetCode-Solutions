class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        long long  sum = 0 ;
        vector<int>ans(nums.size() , -1);
        if(2*k+1 > nums.size())return ans;
        int d = (2*k)+1;
        for(int i = 0 ; i<d ; i++){
            sum+=nums[i];
        }
        cout<<sum;
        

        int l = 0 ; 
        int r = d;
        
        ans[k] = sum/d;
        k++;
        for(int i = r; i< nums.size() ; i++){
            sum+=nums[i];
            sum-=nums[l];
            l++;
            ans[k] = sum/d;
            k++;
        }
        

        return ans;
    }
};