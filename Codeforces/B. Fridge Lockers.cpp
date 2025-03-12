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
    map<pair<pair<ll,ll>,pair<ll,ll>>,ll>mp;
    while(test--)
    {
        ll n,m;
        cin>>n>>m;
        pair<ll,ll>p;
        map<pair<ll,ll>,ll>mp;
        vector<ll>v;
        for(int i=0; i<n; i++)
        {
            ll a;
            cin>>a;
            //pair<ll,ll>p;
            p=make_pair(a,i);
            mp[p]++;
            v.push_back(a);
        }

        if(n>m || n==2)
        {
            cout<<-1<<endl;
            continue;
        }
        vector<ll>vec;
        for(auto a=mp.begin(); a!=mp.end(); a++)
        {
            vec.push_back(a->first.second);
        }
        ll cost=0;
            ll temp=m;
            for(int i=0; i<vec.size(); i++)
            {
                cost+=(v[vec[i]]*2);
                m--;
            }
            cost+=((v[vec[0]]+v[vec[1]])*m);
            cout<<cost<<endl;
            for(int i=0; i<vec.size()-1; i++)
            {
                cout<<vec[i]+1<<" "<<vec[i+1]+1<<endl;;
                temp--;
            }

            cout<<vec[0]+1<<" "<<vec[vec.size()-1]+1<<endl;;
            temp--;
            while(temp--)
            {
                cout<<vec[0]+1<<" "<<vec[1]+1<<endl;;
            }
    }
    return 0;
}