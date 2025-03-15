#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios_base::sync_with_stdio(false);
    ll test;cin>>test;
    while(test--){
        ll n;cin>>n;
        vector<ll>vec;
        for(int i=0;i<n;i++){
            ll a;cin>>a;
            vec.push_back(a);
        }
        ll alice=0,bob=0,i=0,j=n-1,mov=0,current=0;
        while(i <= j){
            ll temp=0,temp2=0,c=0;
            while(temp<=current && i<=j){
                temp+=vec[i];i++;c++;
            }
            current=temp;
            alice+=temp;
            if(c!=0){mov++;}
            c=0;

            while(temp2<=current && i<=j){
                temp2+=vec[j];j--;c++;
            }
            bob+=temp2;
            current=temp2;
            if(c!=0){mov++;}
            //cout<<i<<" "<<j<<endl;
            //cout<<temp<<" "<<temp2<<endl;
            //cout<<alice<<" "<<bob<<endl;
            //cout<<endl;
        }
        cout<<mov<<" "<<alice<<" "<<bob<<endl;
    }

    return 0;
}