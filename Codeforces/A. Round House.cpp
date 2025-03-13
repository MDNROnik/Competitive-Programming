#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n=1e+9;
int main(){
    ll n,a,b;
    cin>>n>>a>>b;
    if(b<0){
        while(b++){
            a--;
            if(a<=0){
                a=n;
            }
        }
        cout<<a<<endl;
    }
    else{
        while(b--){
            a++;
            if(a>n){
                a=1;
            }
        }
        cout<<a<<endl;
    }
 
    return 0;
}