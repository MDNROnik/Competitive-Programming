#include <bits/stdc++.h>
using namespace std;
#define ll long long
vector<ll>arr;
int main(){
    ll test;
    cin>>test;
    while(test--){
        ll n,c=0,x=0;cin>>n;
        ll arr[n];
        for(ll i=0;i<n;i++){
            cin>>arr[i];
            if(c==0 && arr[i]==0){

            }
            else{
                c+=1;
                if(arr[i]==0){x++;}
            }
        }
        ll count=0;c=0;
        for(ll i=0;i<n-1;i++){
            if(x==0){break;}
            if(arr[i]>0){
                ll temp=0;
                temp=arr[i];
                arr[i]=0;c+=temp;
                for(ll j=i+1;j<n;j++){
                    if(temp==0){break;}
                    if(arr[j]==0){arr[j]++;temp--;x--;}
                }
                arr[n-1]+=temp;
            }
        }
        for(ll i=0;i<n-1;i++){
            //cout<<count<<" ";
            //cout<<arr[i]<<" ";
            count+=arr[i];
            //cout<<count<<endl;
        }
        cout<<count+c<<endl;
    }
    return 0;
}