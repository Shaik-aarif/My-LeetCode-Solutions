/*
You are given an integer array height of length n. There are n vertical lines drawn such that the two endpoints of the ith line are (i, 0) and (i, height[i]).

Find two lines that together with the x-axis form a container, such that the container contains the most water.

Return the maximum amount of water a container can store.

Notice that you may not slant the container.
*/


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