#include<bits/stdc++.h>
using namespace std;
#define ll long long
//ll n=1e+9;
int main(){
    ll test;
    cin>>test;
    while(test--){
        ll n;cin>>n;
        ll count=0;
        while(n>1){
            ll c=1;
            ll num=n;
            ll temp=0;
            while(1){
                temp+=c*2;
                temp+=c-1;
                //cout<<temp<<" "<<c<<endl;
                if(temp==n){
                    n=0;break;
                }
                else if(temp>n){
                    temp-=c*2;
                    temp-=c-1;
                    n-=temp;
                    c--;
                    //cout<<temp<<" "<<n<<endl;
                    break;
                }
                c++;
            }
            count++;
        }
        cout<<count<<endl;
    }
    return 0;
}