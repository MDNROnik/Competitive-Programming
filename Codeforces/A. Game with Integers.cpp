#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;cin>>t;
    while(t--){
        ll n;cin>>n;
        if(n%3==0 && n>=3){
            cout<<"Second"<<endl;
        }
        else{
            cout<<"First"<<endl;
        }
    }
}
