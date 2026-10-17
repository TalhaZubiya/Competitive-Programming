#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        int count = 0;
        int x, y;
        cin>> x >> y;
        while(x--){
            int a;
            cin>> a ;
            if(a>=y){
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}