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
        string s;cin>>s;
        map<char,ll>mp;
        ll ans=0;
        ll maxx=2000000;
        for(int i=0;i<s.size();i++){
            mp[s[i]]=i+1;
            if(mp.size()==3 ){
                vector<ll>vec;
                vec.push_back(mp['1']);
                vec.push_back(mp['2']);
                vec.push_back(mp['3']);
                ll mi=*min_element(vec.begin(),vec.end());
                ll ma=*max_element(vec.begin(),vec.end());
                ll temp=ma-mi;temp++;
                if(temp<maxx){
                    maxx=temp;
                }
                if(maxx==3){
                    break;
                }
            }
        }
        if(maxx==2000000){maxx=0;}
        cout<<maxx<<endl;
    }


    return 0;
}