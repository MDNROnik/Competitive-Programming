#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll n,m;cin>>n>>m;
    ll maxx=-1,index=-1;
    for(int i=0;i<n;i++){
        ll a;cin>>a;
        ll temp=0;
        if(a%m==0){
            temp=a/m;
        }
        else{
            temp=a/m;temp++;
        }
        if(temp>=maxx){
            maxx=temp;
            index=i+1;
        }
    }
    cout<<index<<endl;
    return 0;
}