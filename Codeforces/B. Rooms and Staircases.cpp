#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll test;cin>>test;
    while(test--){
        ll n;cin>>n;
        string s;cin>>s;
        ll index=0,index2=0;
        for(int i=n-1;i>=0;i--){
            if(s[i]=='1'){
                index=i+1;break;
            }
        }
        reverse(s.begin(),s.end());
        for(int i=n-1;i>=0;i--){
            if(s[i]=='1'){
                index2=i+1;break;
            }
        }
        if(index==0 && index==0){
            cout<<n<<endl;continue;
        }
        cout<<(max(index,index2))*2<<endl;
 
    }
    return 0;
}