#include<bits/stdc++.h>
using namespace std;
int main(){
    long long test;
    cin>>test;
    while(test--){
        long long a,b,n,s;
        cin>>a>>b>>n>>s;
        int temp=s/n;
        if(temp>=a){
            temp=a;
        }
        temp*=n;
        long long t=s-temp;
        if(t<=b){cout<<"YES"<<endl;}
        else{cout<<"NO"<<endl;}
    }

    return 0;
}