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
        ll n,c;cin>>n>>c;
        vector<ll>v,vec;
        map<ll,ll>mp;
        map<ll,ll>::iterator it;
        for(int i=0;i<n;i++){
            ll a;cin>>a;
            a+=i;
            a++;
            mp[a]++;
        }
        ll count=0;
        for(it=mp.begin();it!=mp.end();it++){
            for(int i=0;i<it->second;i++){
                vec.push_back(it->first);
            }
        }
        for(int i=0;i<vec.size();i++){
            //cout<<vec[i]<<" "<<c<<endl;
            if((c-vec[i])>=0){
                count++;
                c-=vec[i];
            }

        }
        //cout<<endl;
        cout<<count<<endl;
    }


	return 0;
}
