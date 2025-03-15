#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll test;cin>>test;
    while(test--){
        ll n,k;cin>>n>>k;
        if(n<k){
            cout<<"NO"<<endl;continue;
        }
        else if(n%k==0){
            cout<<"YES"<<endl;
            for(int i=0;i<k;i++){
                cout<<n/k<<" ";
            }
            cout<<endl;continue;
        }
        else{
            if(n%2==0 && k%2==0){
                cout<<"YES"<<endl;
                for(int i=0;i<k-1;i++){
                    cout<<1<<" ";
                }
                cout<<n-(k-1)<<endl;continue;
            }
            else if(n%2!=0 && k%2!=0){
                cout<<"YES"<<endl;
                for(int i=0;i<k-1;i++){
                    cout<<1<<" ";
                }
                cout<<n-(k-1)<<endl;continue;
            }
            else if(n%2==0 && k%2!=0){
                ll temp=n%k;
                if(temp%2==0){
                    cout<<"YES"<<endl;
                    for(int i=0;i<k-1;i++){
                        cout<<n/k<<" ";
                    }
                    cout<<(n/k)+temp<<endl;continue;
                }
                else if((n/k)-1 ==0){
                    cout<<"NO"<<endl;continue;
                }
                else{
                    cout<<"YES"<<endl;
                    for(int i=0;i<k-1;i++){
                        cout<<n/k-1<<" ";
                    }
                    cout<<(n/k)+temp+(k-1)<<endl;continue;
                }
            }
            else{
                cout<<"NO"<<endl;continue;
            }
        }
    }
    return 0;
}