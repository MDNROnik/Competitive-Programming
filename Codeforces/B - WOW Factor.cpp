#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s;cin>>s;
    vector<ll>v;
    int now=0;
    int n=s.size();

    for(int i=0;i<n;i++){
        if(i<n-1 && s[i]=='v' && s[i+1]=='v'){
            now++;
            v.push_back(now);
        }
        else{
            v.push_back(now);
        }
    }
    ll ans=0;
    for(int i=0;i<v.size();i++){
        //cout<<"{ "<<s[i]<<" - "<<v[i]<<" }"<<" ";
        if(s[i]=='o'){
            ll temp = now-v[i];
            ans+=(v[i]*temp);
        }
    }
    cout<<ans<<endl;
    //cout<<endl;

}


