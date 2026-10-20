#include<bits/stdc++.h>
using namespace std;
int main(){
        int t;
        cin>> t;
        while(t--){
            int n;
            cin>>n;
            int sum=0;
            while(n--){
                int a;
                cin>> a;
                sum += a;
            }
            if(sum%2!=0){
                cout<<-1<<endl;
            }
            else if(sum>=0){
                cout<<sum/2<<endl;
            }
            else{
                cout<<-(sum/2)<<endl;
            }
        }
    
    return 0;
}