#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define fastIo() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)
int main()
{
    fastIo();
    ll test;
    cin>>test;
    while(test--)
    {
        ll n;cin>>n;
        ll m=n-1;
        vector<vector<ll>>vec;
        //vector<ll>v(n,0);
        for(int i=0;i<n;i++){
            vector<ll>v;
            for(int j=0;j<m;j++){
                ll a;cin>>a;
                v.push_back(a);
            }
            vec.push_back(v);
        }
        vector<ll>v(n+1,0);
        for(int i=0;i<m-1;i++){
            vector<ll>temp;
            for(int j=0;j<n;j++){
                v[vec[j][i]]++;
                if(v[vec[j][i]]==m){
                    temp.push_back(vec[j][i]);
                }
            }
            sort(temp.begin(),temp.end());
            for(int j=0;j<temp.size();j++){
                cout<<temp[j]<<" ";
            }
        }
        vector<pair<ll,ll>>vp;
        for(int i=1;i<=n;i++){
            pair<ll,ll>p;
            if(v[i]!=m){
                p=make_pair(v[i],i);
                vp.push_back(p);
            }
        }
        sort(vp.begin(),vp.end());
        reverse(vp.begin(),vp.end());
        for(int i=0;i<vp.size();i++){
            cout<<vp[i].second<<" ";
        }
        cout<<endl;
    }
    return 0;
}