#include<bits/stdc++.h>
using namespace std;
#define ll long long
//ll n=1e+9;
int main(){
    ll test;
    cin>>test;
    while(test--){
        ll n;cin>>n;
        vector<ll>even,odd;
        for(int i=0;i<n;i++){
            ll a;cin>>a;
            if(a%2==0){
                even.push_back(a);
            }
            else{
                odd.push_back(a);
            }
        }
        if(even.size()%2==0 && odd.size()%2==0){
            cout<<"YES"<<endl;
        }
        else if(even.size()%2!=0 && odd.size()%2!=0){
            ll c=0;
            for(int j=0;j<odd.size();j++){
                for(int i=0;i<even.size();i++){
                    //cout<<odd[j]<<" "<<even[i]<<endl;
                    if( abs(even[i]-odd[j]) == 1 ){
                        c++;break;
                    }
                }
                if(c==1){break;}
            }
            if(c==1){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}