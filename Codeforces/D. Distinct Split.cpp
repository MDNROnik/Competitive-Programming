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
        string s;cin>>s;
        string s2=s;
        vector<ll>first,second;
        map<char,ll>mp1,mp2;
        for(int i=0;i<n;i++){
            mp1[s[i]]++;
            first.push_back(mp1.size());
        }
        reverse(s.begin(),s.end());
        for(int i=0;i<n;i++){
            mp2[s[i]]=1;
            second.push_back(mp2.size());
        }
        reverse(second.begin(),second.end());
        ll maxx=0;
        for(int i=0;i<first.size();i++){
            ll count=first[i]+second[i];
            if(count>maxx){
                //cout<<i<<" "<<count<<endl;
                if(mp1[s2[i]] >= 2){
                    maxx=count;
                }
                else{
                    maxx=count-1;
                }
            }
        }
        cout<<maxx<<endl;
    }


	return 0;
}
