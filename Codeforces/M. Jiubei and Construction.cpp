#include<bits/stdc++.h>
using namespace std;
using namespace std;
#define ll long long
int main()
{
    ll test;cin>>test;
    while(test--)
    {
        ll n,k;cin>>n>>k;
        vector<ll>v;
        if(k==0){
            if(n%2==0){
                for(ll i=1;i<=n;i+=2){
                    cout<<i<<" -"<<i<<" ";
                }
                cout<<endl;
            }
            else{
                cout<<0<<" ";
                n--;
                for(ll i=1;i<=n;i+=2){
                    cout<<i<<" -"<<i<<" ";
                }
                cout<<endl;
            }
        }
        else{
            if(n%2==0){
                cout<<k<<" "<<0<<" ";
                n-=2;
                for(ll i=1;;i++){
                    if(i==k){
                        continue;
                    }
                    else if(n==0){break;}
                    n-=2;
                    cout<<i<<" -"<<i<<" ";
                }
                cout<<endl;
            }
            else{
                cout<<k<<" ";
                n--;
                for(ll i=1;;i++){
                    if(i==k){
                        continue;
                    }
                    else if(n==0){break;}
                    n-=2;
                    cout<<i<<" -"<<i<<" ";
                }
                cout<<endl;
            }
        }
    }

    return 0;
}