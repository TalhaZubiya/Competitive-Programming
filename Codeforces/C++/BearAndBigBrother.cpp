#include <bits/stdc++.h>
using namespace std;

int main() {
    int a;
    int b;
    int year=0;
    cin>>a>>b;
    
    do{
        a=a*3;
        b=b*2;
        year++;  
        
    } while(a<=b);

    cout<<year<<endl;
    
    return 0;
}