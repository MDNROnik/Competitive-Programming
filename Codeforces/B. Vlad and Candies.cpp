#include <bits/stdc++.h>
using namespace std;
#define ll long long
//vector<ll>arr;
int main(){
    ll test;
    cin>>test;
    while(test--){
        ll n,a,max1=0,max2=0;
        vector<ll>arr;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>a;
            arr.push_back(a);
            if(max1<a){
                max2=max1;max1=a;
            }
            else {
                if(a<=max1 && a>max2){max2=a;}
            }
        }
        if(n==1 && arr[0]==1){cout<<"YES"<<endl;}
        else if(n==1 && arr[0]>1){cout<<"NO"<<endl;}
        else if(n>1 && max1==max2){cout<<"YES"<<endl;}
        else if(n>1 && (max1-max2)==1){cout<<"YES"<<endl;}
        else{cout<<"NO"<<endl;}
    }
    return 0;
}