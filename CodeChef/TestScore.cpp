#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        int n,x,y;
        cin>> n >> x >>y;
        if(y%x==0 && y<=n*x){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

        
    }
    return 0;
}