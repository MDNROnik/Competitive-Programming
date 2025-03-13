#include<bits/stdc++.h>
using namespace std;
#define ll long long
//unsigned ll n = std::bitset<32>(s).to_ulong(); //for string_binary to decimal
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll test;cin>>test;
    while(test--){
        ll w,d,h;cin>>w>>d>>h;
        ll a,b,f,g;cin>>a>>b>>f>>g;
        ll count=0;
        count+=h;
        ll t=abs(g-0);
        t+=b;t+=abs(a-f);

        ll t2=abs(g-d);
        t2+=(abs(d-b));t2+=abs(a-f);

        ll t3=abs(f-0);
        t3+=a;t3+=abs(g-b);

        ll t4=abs(f-w);
        t4+=abs(w-a);t4+=abs(g-b);
        vector<ll>v;
        v.push_back(t);v.push_back(t2);v.push_back(t3);v.push_back(t4);
        sort(v.begin(),v.end());
        count+=v[0];

        cout<<count<<endl;
    }


    return 0;
}
