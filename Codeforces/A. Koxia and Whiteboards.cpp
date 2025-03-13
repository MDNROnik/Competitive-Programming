#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define fastIo() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll test;
    cin>>test;
    while(test--)
    {
        ll n,q;
        cin>>n>>q;
        vector<ll>v,v1;
        ll sum=0,sum1=0;
        for(int i=0;i<n;i++){
            ll a;cin>>a;
            sum+=a;
            v.push_back(a);
        }
        for(int i=0;i<q;i++){
            ll a;cin>>a;
            sort(v.begin(),v.end());
            ll c=0;
            for(int j=0;j<v.size();i++){
                if(v[j]<=a || v[j]>a){
                    sum-=v[j];
                    v[j]=a;
                    sum+=a;
                    break;
                }
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}