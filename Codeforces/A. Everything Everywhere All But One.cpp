#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll test;
    cin>>test;
    while(test--){
        ll n;
        cin>>n;
        ll a[n],sum=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
        }
        int c=0;
        if(sum%n==0){
            int temp=sum/n;
            for(int i=0;i<n;i++){
                if(a[i]==temp){
                    c=1;break;
                }
            }
            if(c==1){cout<<"YES"<<endl;}
            else{cout<<"NO"<<endl;}
        }
        else{
            cout<<"NO"<<endl;
        }

    }
    return 0;
}