#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios_base::sync_with_stdio(false);
    ll n,k;cin>>n>>k;
    if( n < 2 ){
        if(k==10){
            cout<<-1<<endl;
        }
        else{
            cout<<k<<endl;
        }
    }
    else{
        if(k<10){
            for(int i=0;i<n;i++){
                cout<<k;
            }
            cout<<endl;
        }
        else{
            cout<<k;
            n-=2;
            for(int i=0;i<n;i++){
                cout<<0;
            }
            cout<<endl;
        }
    }

    return 0;
}