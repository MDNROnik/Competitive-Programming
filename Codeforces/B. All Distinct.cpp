#include <bits/stdc++.h>
using namespace std;
#define ll long long
vector<ll>arr;
int main(){
    ll test;
    cin>>test;
    while(test--){
        int n;
        cin>>n;int a;
        map<int,int>mp;
        for(int i=0;i<n;i++){cin>>a;mp[a]++;}
        int siz=mp.size();
        if(siz==1){
            if(n%2==0){cout<<0<<endl;}
            else{cout<<1<<endl;}
        }
        else if(siz==2){
            if(n%2==0){cout<<2<<endl;}
            else{cout<<1<<endl;}
        }
        else if(siz>2 && siz%2 == 0){
            if(n%2 == 0){cout<<siz<<endl;}
            else{cout<<siz-1<<endl;}
        }
        else if(siz>2 && siz%2!= 0){
            if(n%2 == 0){cout<<siz-1<<endl;}
            else{cout<<siz<<endl;}
        }
    }
    return 0;
}
    