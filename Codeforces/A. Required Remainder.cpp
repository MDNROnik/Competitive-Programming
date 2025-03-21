#include<bits/stdc++.h>
#include <string>
#include <sstream>
using namespace std;
int main(){
    long long test,x,y,n,res=0;
    cin>>test;
    while(test--){
        cin>>x>>y>>n;
        res=n/x;
        if(((res*x)+y) > n){
            res-=1;
        }
        cout<<(res*x)+y<<endl;
    }

    return 0;
}





 