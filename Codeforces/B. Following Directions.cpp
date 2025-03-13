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
        ll flag=0;
        ll r=0,u=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='U'){
                u++;
            }
            else if(s[i]=='D'){
                u--;
            }
            else if(s[i]=='L'){
                r--;
            }
            else if(s[i]=='R'){
                r++;
            }
            if(u==1 && r==1){
                flag=1;break;
            }
        }
        if(flag==1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }


	return 0;
}
