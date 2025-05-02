#include<bits/stdc++.h>
#define ll long long
using namespace std;

void Yes(int check){
    if(check){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"Yes"<<endl;
    }
}
void No(int check){
    if(check){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;cin>>t;
    while(t--){
        ll n;cin>>n;
        vector<ll>v;
        for(int i=0;i<n;i++){
            ll a;cin>>a;
            if(a==1){
                a++;
            }
            v.push_back(a);
        }
        for(int i=1;i<n;i++){
            if(v[i-1]>v[i]){
                continue;
            }
            else{
                if( (v[i]%v[i-1]) == 0 ){
                    v[i]++;
                }
            }
        }
        for(int i=0;i<n;i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }

    return 0;
}


