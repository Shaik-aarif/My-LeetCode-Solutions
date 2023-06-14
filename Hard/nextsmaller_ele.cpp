#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int n ;
    cin>> n ;
    int a[n];
    for(int i = 0 ; i< n ; i++){
        cin>>a[i];
    }

    int ns[n];
    stack<int>st;

    for(int i = n-1 ; i>=0 ; i--){
        while(!st.empty() && a[st.top()] >= a[i]){
            st.pop();
        }

        if(st.empty()){
            ns[i] = -1;
        }
        else{
            ns[i] = a[st.top()];
        
        }
        st.push(i);
    }
    for(int i = 0 ; i< n ; i++){
        cout<<ns[i]<<" ";
    }
    return 0;
}