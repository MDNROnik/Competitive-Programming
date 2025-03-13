#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define fastIo() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    ll test;cin>>test;
    while(test--){
        ll n;cin>>n;
        ll i=2;vector<ll>v;
        while(i<=sqrt(n)){
            if(n%i==0){
                n/=i;
                v.push_back(i);break;
            }
            i++;
        }
        i++;
        ll j=sqrt(n);
        for(;i<=j;i++,j--){
            //cout<<i<<" "<<j<<endl;
            if(n%i==0 && (n/i)!=i){
                cout<<"YES"<<endl;
                cout<<v[0]<<" "<<i<<" "<<n/i<<endl;i=-1;break;
            }
            if(n%j==0 && (n/j)!=j){
                cout<<"YES"<<endl;
                cout<<v[0]<<" "<<j<<" "<<n/j<<endl;i=-1;break;
            }
        }
        if(i!=-1){
            cout<<"NO"<<endl;
        }
 
    }
    return 0;
}