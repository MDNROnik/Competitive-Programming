#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define fastIo() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)
ll gcd(ll a, ll b)
{

    if(b == 0) {
            return a;
    }
    else {
        return gcd(b, a % b);
    }
}

int main()
{
    fastIo();
    ll test;
    cin>>test;
    while(test--)
    {
        ll n;cin>>n;
        vector<ll>v,v1;
        map<ll,vector<ll>>mp;
        for(int i=0;i<n;i++){
            ll a;cin>>a;
            if(a%2==0){
                v.push_back(i+1);
            }
            else{
                v1.push_back(i+1);
            }
        }
        if(v1.size()==0 || (v1.size()==2 && v.size()==1) ){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
            if(v1.size()>2){
                cout<<v1[0]<<" "<<v1[1]<<" "<<v1[2]<<endl;
            }
            else if(v1.size()>=1){
                cout<<v1[0]<<" "<<v[0]<<" "<<v[1]<<endl;
            }
        }
    }
    return 0;
}
