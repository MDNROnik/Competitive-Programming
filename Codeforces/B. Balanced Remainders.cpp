#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll test;cin>>test;
    while(test--){
        ll n;cin>>n;
        ll c0=0,c1=0,c2=0;
        for(int i=0;i<n;i++){
            ll a;cin>>a;
            if(a%3==0){c0++;}
            else if(a%3==1){c1++;}
            else if(a%3==2){c2++;}
        }
        //cout<<c0<<" "<<c1<<" "<<c2<<endl;
        if(c0==c1 && c1==c2 && c0==c2){cout<<0<<endl;}
        else if(c0>=c1 && c0>=c2){
            ll t=n/3;
            c1+=c0-t;
            ll count=c0-t;
            if(c1==c2){cout<<count<<endl;}
            else if(c1<c2){
                count+=((c2-t)*2);cout<<count<<endl;
            }
            else if(c1>c2){
                count+=(c1-t);cout<<count<<endl;
            }
        }
        else if(c1>=c0 && c1>=c2){
            ll t=n/3;
            c2+=c1-t;
            ll count=c1-t;
            if(c0==c2){cout<<count<<endl;}
            else if(c2<c0){
                count+=((c0-t)*2);cout<<count<<endl;
            }
            else if(c2>c0){
                count+=(c2-t);cout<<count<<endl;
            }
        }
        else if(c2>=c0 && c2>=c1){
            ll t=n/3;
            c0+=c2-t;
            ll count=c2-t;
            if(c1==c0){cout<<count<<endl;}
            else if(c1>c0){
                count+=((c1-t)*2);cout<<count<<endl;
            }
            else if(c0>c1){
                count+=(c0-t);cout<<count<<endl;
            }
        }
    }
    return 0;
}