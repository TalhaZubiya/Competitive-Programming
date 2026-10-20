#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>> t;
    while(t--){
        int n, x;
        cin>> n >> x;
        if(x==0 || n==x){
            cout<<0<<endl;
        }
        else{
            cout<<min(x, n-x)<<endl;
        }
    }
    
    return 0;
}