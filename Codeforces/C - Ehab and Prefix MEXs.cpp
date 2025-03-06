#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n;
    cin>>n;
    map<int,int>mp;
    vector<int>v;
    for(int i=0;i<n;i++){
        ll a;cin>>a;
        mp[a]++;
        v.push_back(a);
    }
    set<int>s;
    set<int>::iterator it;
    for(int i=0;i<=2*n;i++){
        if(mp[i]==0){
            s.insert(i);
        }
    }

    vector<int>ans;


    for(int i=0;i<n;i++){
        it = s.begin();
        ans.push_back(*it);
        s.erase(it);
        mp[v[i]]--;
        if(mp[v[i]]==0){
            s.insert(v[i]);
        }
    }
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}
