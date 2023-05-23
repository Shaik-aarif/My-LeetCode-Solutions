#include <bits/stdc++.h>
using namespace std;
 
int main(){
    vector<vector<int>> v = {{1,2,3} , {2,3,4} , {1,23,}};

    for(auto x : v){
            for(auto y : x){
                cout<<y;
            }
        }
    cout<<endl<<v.size();
    return 0;
}