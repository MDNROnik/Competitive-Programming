#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define fastIo() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)
int main()
{
    fastIo();
    ll test;cin>>test;
    map<pair<pair<ll,ll>,pair<ll,ll>>,ll>mp;
    while(test--){
        ll n,k;cin>>n>>k;
        vector<pair<ll,ll>>v,v2;
        ll count=0;
        vector<ll>vec;
        for(int i=0;i<n;i++){
            ll a,b;cin>>a>>b;
            pair<ll,ll>p;
            p=make_pair(a,b);
            v.push_back(p);
            if(a<=k && b>=k){count++;}
            vec.push_back(a);vec.push_back(b);
        }
        sort(vec.begin(),vec.end());
        if(count==0){
            cout<<"NO"<<endl;continue;
        }
        map<ll,ll>m;
        map<ll,vector<pair<ll,ll>>>m2;
        for(int i=vec[0];i<=vec[vec.size()-1];i++){
            for(int j=0;j<v.size();j++){
                //cout<<i<<endl;
                if(v[j].first <= i && v[j].second>=i){
                    m[i]++;
                    //m2.push_back((v[i].first,v[i].second));
                }
            }
        }
        count=0;
        ll maxx=0;
        ll temp=m[k];

        for(int i=vec[0];i<=vec[vec.size()-1];i++){
            for(int j=0;j<v.size();j++){
                if(v[j].first <= i && v[j].second>=i && i!=k){
                    //cout<<i<<endl;
                    //cout<<v[j].first<<" "<<v[j].second<<endl;
                    if(v[j].first >k || v[j].second <k){
                        //cout<<222222<<endl;
                        //cout<<i<<endl;
                        m[i]--;
                    }
                }

            }


        }
        count=0;
        for(auto a=m.begin();a!=m.end();a++){
            if(a->second >= temp && k!=a->first){
                count++;break;
            }
        }
        if(count==0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}