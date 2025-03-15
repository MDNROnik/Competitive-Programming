#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios_base::sync_with_stdio(false);
    ll test;cin>>test;
    while(test--){
        ll l,r,x;cin>>l>>r>>x;
        ll a,b;cin>>a>>b;
        //cout<<"ans"<<" ";
        if(a==b){
            cout<<0<<endl;
        }
        else if(abs(a-b) >= x){
            cout<<1<<endl;
        }
        else if(abs(b-l)>=x && abs(b-r)>=x){
            cout<<2<<endl;
        }
        else if(abs(b-l) >= x){
            if(abs(l-a)>=x){
                cout<<2<<endl;
            }
            else if(abs(r-a) >= x){
                if(abs(r-b) >= x){
                    cout<<2<<endl;
                }
                else if(abs(b-l) >=x){
                    cout<<3<<endl;
                }
                else{
                    cout<<-1<<endl;
                }
            }
            else{
                cout<<-1<<endl;
            }
        }
        else if(abs(r-b)>=x){
            if(abs(r-a) >=x){
                cout<<2<<endl;
            }
            else if(abs(a-l)>=x ){
                if(abs(b-l) >=x){
                    cout<<2<<endl;
                }
                else if(abs(r-b) >=x){
                    cout<<3<<endl;
                }
                else{
                    cout<<-1<<endl;
                }
            }
            else{
                cout<<-1<<endl;
            }
        }
        else{
            cout<<-1<<endl;
        }
       // cout<<endl;
    }
    return 0;
}