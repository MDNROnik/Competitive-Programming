#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define fastIo() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
bool prime[90000001];
int n=90000000;
vector<int>v;
ll temp=0;
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
//map<string,ll>mp;
solve(string &s,string &t,int i,set<string> &mp){
    if(i==s.size()){
        return 0;
    }
    mp.insert(s);
    //cout<<s<<" "<<t<<endl;
    solve(s,t,i+1,mp);
    s.erase(i,1);
    s.insert(i,t);
    mp.insert(s);
    solve(s,t,i+1,mp);
    s.erase(i,t.size());
    s.insert(i,"a");
    //cout<<s<<" "<<t<<endl;
    return 0;
}

int main()
{
    fastIo();
    ll test;cin>>test;
    while(test--){
        string s,t;
        cin>>s>>t;
        if(t.size()==1 && t[0]=='a'){
            cout<<1<<endl;
        }
        else{
            ll c=0;
            for(int i=0;i<t.size();i++){
                if(t[i]=='a'){
                    c++;break;
                }
            }
            if(c==1){
                cout<<-1<<endl;continue;
            }
            ll ans=pow(2,s.size());
            cout<<ans<<endl;
            //mp.clear();
        }
    }

    return 0;
}