#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n,k;cin>>n>>k;

    if(n*2 > k){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
        for(int i=1;i<n;i++){
            cout<<2<<" ";
            k-=2;
        }
        cout<<k<<endl;
        cout<<1<<endl;
    }

}


