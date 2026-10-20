#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        int a,b,c,d;
        cin>> a >> b >> c>> d;
        int mx1=max(a,b);
        int mx2=max(c,d);
        cout<<mx1+mx2<<endl;

    }
    return 0;
}