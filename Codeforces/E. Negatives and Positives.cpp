#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define fastIo() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)

int main()
{
    fastIo();
    ll test;cin>>test;

    while(test--){
        ll n;cin>>n;
        vector<ll>v,v2,v3;

        ll sum=0;
        ll mi=1e+18;
        ll m=0;
        for(int i=0;i<n;i++){
            ll a;cin>>a;
            if(a<0){
                m++;
            }
            a=abs(a);
            sum+=abs(a);
            mi=min(mi,a);
        }
        //cout<<sum<<" "<<mi<<endl;
        if(m%2==0){
            cout<<sum<<endl;
        }
        else{
            sum-=mi;
            cout<<sum-mi<<endl;
        }

    }


	return 0;
}
