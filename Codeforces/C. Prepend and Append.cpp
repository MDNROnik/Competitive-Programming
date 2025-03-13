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
        ll i=0;ll j=s.size()-1;
        ll count=0;
        while(i<j){
            if(s[i]!=s[j]){
                count+=2;i++;j--;
            }
            else{
                break;
            }
        }
        cout<<n-count<<endl;
    }


	return 0;
}
