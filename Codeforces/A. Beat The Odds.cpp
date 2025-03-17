#include <bits/stdc++.h>
using namespace std;
#define ll long long
vector<ll>arr;
int main(){
    ll test;
    cin>>test;
    while(test--){
        ll n,a,e=0,o=0;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>a;
            if(a%2==0){e++;}
            else{
                o++;
            }
        }
        //cout<<e<<" "<<o<<endl;
        if(e<=o){
            cout<<e<<endl;
        }
        else{
            cout<<o<<endl;
        }
    }
    return 0;
}