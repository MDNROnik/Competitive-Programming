#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,d;
    ll song=0;
    cin>>n>>d;
    for(int i=0;i<n;i++){
        ll a;cin>>a;
        song+=a;
    }
    n-=1;
    if((n*10)+song <= d){
        d=d-((n*10)+song);
        d+=n*10;
        cout<<d/5<<endl;
    }
    else{
        cout<<-1<<endl;
    }
    
    return 0;
}