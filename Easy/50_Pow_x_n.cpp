// Implement pow(x, n), which calculates x raised to the power n (i.e., xn).


class Solution {
public:
    double myPow(double x, int n) {
        double ans = 1.0;
        long long  nc = n ; // copy of n
        if(nc<0){
            nc*=-1;
        }  

        while(nc){
            if(nc%2 == 0){
                x*=x;
                nc/=2;
            }
            else
            {
                ans*=x;
                nc-=1;
            }
        }
        if(n < 0){
            ans = (double)(1.0)/(double)(ans);
        }

        return ans;
    }
};