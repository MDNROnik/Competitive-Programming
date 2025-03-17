#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll test;
    cin>>test;
    while(test--){
        ll n,j,m,sum=0;
        cin>>n>>m;j=m;
        for(int i=1;i<m;i++){sum+=i;}
        for(int i=1;i<=n;i++){
            sum+=j;
            j+=m;
        }
        cout<<sum<<endl;
    }
    return 0;
}