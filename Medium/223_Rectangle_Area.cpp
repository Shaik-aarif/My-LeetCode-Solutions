class Solution {
public:
    int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2) {
        int l1 = abs(ax1 - ax2);
        int h1 = abs(ay1 - ay2);
        int area1 = l1*h1;
        int l2 = abs(bx1 - bx2);
        int h2 = abs(by1 - by2);
        int area2 = l2*h2;

        int x_inter_dist = min(ax2 , bx2) - max(ax1 , bx1);
        int y_inter_dist = min(ay2 , by2) - max(ay1 , by1);
        
        int carea  = 0 ;
        if(x_inter_dist > 0 && y_inter_dist >0){
            carea = x_inter_dist * y_inter_dist;
        }

        

        return ((area1+area2)-carea);
    }
};