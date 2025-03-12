#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define fastIo() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
bool prime[90000001];
int n=90000000;
vector<int>v;
void sieve()
{
    for(int i=2; i*i<=n; i++)
    {
        if(prime[i]==false)
        {
            for(int j=i*i; j<=n; j+=i)
            {
                prime[j]=true;
            }
        }
    }
    for(int i=2; i<=n; i++)
    {
        if(prime[i]==false)v.push_back(i);
    }
}

int main()
{
    fastIo();
    ll test;
    cin>>test;
    while(test--)
    {
        ll n;cin>>n;
        string s;cin>>s;
        string m="0";
        for(int i=0;i<s.size();i++){
            if(m[0] < s[i]){
                m[0]=s[i];
            }
        }
        string ans;
        //reverse(s.begin(),s.end());
        ll c=0;
        if(m[0]=='9' && s[0]=='9'){
            reverse(s.begin(),s.end());
            ll z=0;
            for(int i=0;i<s.size();i++){
                ll t=s[i]-'0';
                if(c>0){
                    c=0;
                    t++;
                }
                if(1<t){
                    c++;
                    t=11-t;
                    string str;str=to_string(t);
                    ans.push_back(str[0]);
                }
                else{
                    string str;str=to_string(1-t);
                    ans.push_back(str[0]);
                }
            }
            reverse(ans.begin(),ans.end());
            cout<<ans<<endl;
        }
        else{
            for(int i=0;i<s.size();i++){
                ll ma=9;
                ll t=s[i]-'0';
                cout<<ma-t;
            }
            cout<<endl;
        }

    }

    return 0;
}