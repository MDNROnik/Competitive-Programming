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
        ll n;cin>>n;
        string s;cin>>s;
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        //cout<<s<<endl;
        string cat="meow";
        ll t=0,i=0;
        ll count=0;
        if(s[i]==cat[t]){
            while(s[i]==cat[t]){
                i++;
            }
            t++;count++;
        }
        else{
            cout<<"NO"<<endl;continue;
        }
        if(s[i]==cat[t]){
            while(s[i]==cat[t]){
                i++;
            }
            t++;count++;
        }
        else{
            cout<<"NO"<<endl;continue;
        }
        if(s[i]==cat[t]){
            while(s[i]==cat[t]){
                i++;
            }
            t++;count++;
        }
        else{
            cout<<"NO"<<endl;continue;
        }
        if(s[i]==cat[t]){
            while(s[i]==cat[t]){
                i++;
            }
            t++;count++;
        }
        else{
            cout<<"NO"<<endl;continue;
        }
        t--;
        for(;i<s.size();i++){
            if(s[i]!=cat[t]){
                count--;break;
            }
        }
        if(count==4){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}