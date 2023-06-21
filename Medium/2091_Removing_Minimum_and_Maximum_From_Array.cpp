class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int maxi = INT_MIN;
        int mini = INT_MAX;

        int max_ind;
        int min_ind;
        for(int i  = 0 ; i< nums.size() ; i++){
            if(nums[i] > maxi){
                maxi = nums[i];
                max_ind = i;
            }
            if(nums[i] < mini){
                mini = nums[i];
                min_ind = i;
            }
        }
        cout<<min_ind <<" "<<max_ind<<endl;
        int from_left = min(max_ind , min_ind)+1;
        int from_right = nums.size() -max(max_ind , min_ind);

        int a = from_left + from_right;
        cout<<a<<endl;
        int b = max(min_ind , max_ind)+1;
        cout<<b<<endl;
        int c = nums.size() - min(min_ind , max_ind);
        cout<<c<<endl;


        
    return min(a , min(b, c));

    }
};