#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll test;
    cin>>test;
    while(test--){
        ll n,m;cin>>n>>m;
        string s;
        for(int i=0;i<m;i++){s.push_back('B');}
        ll arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
            ll temp=m+1;
            temp-=arr[i];
            if(arr[i]<=temp){
                if(s[arr[i]-1]!='A'){
                    s[arr[i]-1]='A';
                }
                else{
                    s[temp-1]='A';
                }
            }
            else{
                if(s[temp-1]!='A'){
                    s[temp-1]='A';
                }
                else{
                    s[arr[i]-1]='A';
                }
            }
        }
        cout<<s<<endl;

    }
    return 0;
}