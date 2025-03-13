#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define fastIo() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)

int main()
{
    fastIo();
    ll test;cin>>test;
    map<char,ll>mp;
    mp['c']=1;mp['o']=1;mp['d']=1;mp['e']=1;
    mp['f']=1;mp['o']=1;mp['r']=1;mp['c']=1;
    mp['s']=1;
    while(test--){
        char c;cin>>c;
        if(mp[c]==1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }


	return 0;
}
