#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        int x, y;
        cin>> x >> y;
        if(y>x){
            cout<<(y-1)/x<<endl;
        }
        else
        cout<<0<<endl;
        
        
    }
    return 0;
}