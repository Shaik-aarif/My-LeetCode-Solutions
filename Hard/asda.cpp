#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int a[3][3] = {{1,2,3}, {3,4,5} , {5,3,2}};
    // vector<vector<int>> a = {{1,2,3}, {3,4,5} , {5,3,2}};
   
     



    int * p = &a[0][0];
    for(int i = 0 ; i< 9 ; i++){
        cout<<*(p+i)<<" ";
    } 
    return 0;
}