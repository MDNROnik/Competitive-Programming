#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll test;
    cin>>test;
    while(test--){
        ll a,b,c;cin>>a>>b>>c;
        if(a>=c){
            cout<<-1<<" ";
        }
        else{
            cout<<1<<" ";
        }
        if( b*a > c ){
            cout<<b<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
 
 
 
    return 0;
}