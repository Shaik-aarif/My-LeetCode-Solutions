

class Solution {
public:
    int maxArea(vector<int>& height) {
        int l = 0 ;
        int r = height.size()-1;
        int mx = 0 ;

        while(l<r){
            int l_height = height[l];
            int r_height = height[r];
            int min_height = min(l_height , r_height);
            
            mx = max(mx, min_height*(r-l));

                if(l_height<r_height){
                    l++;
                }
                else{
                    r--;
                }

        }

        return mx;

    }
};