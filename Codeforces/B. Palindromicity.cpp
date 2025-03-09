#include<bits/stdc++.h>
using namespace std;
using namespace std;
#define ll long long
int main()
{
    ll test;cin>>test;
    while(test--)
    {
        ll n,k;cin>>n>>k;
        string s;

        for(ll i=0;i<n;i++){
            s.push_back('0');
        }
        //cout<<s.size()<<endl;
        if(k%2!=0){
            cout<<"NO"<<endl;continue;
        }
        for(ll i=0;i<s.size()/2;i++){
            if(k>0){
                //cout<<i<<" ";
                //cout<<s.size()-1-i+1<<endl;
                s[s.size()-1-1-i+1]='1';
                k-=2;
            }
        }
        cout<<"YES"<<endl;
        for(ll i=0;i<s.size();i++){
            cout<<s[i];
        }
        cout<<endl;
    }

    return 0;
}