#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
        string s;cin>>s;
        map<char,ll>mp;
        for(int i=0;i<s.size();i++){
            mp[ s[i] ]++;
        }
        priority_queue <ll> pq;
        ll single=0;
        ll red=0;
        for(auto a=mp.begin();a!=mp.end();a++){
            if(a->second==1){
                single++;
            }
            else if(a->second>=2){
                red++;
            }
        }
        cout<<red+(single/2)<<endl;

    }

}


