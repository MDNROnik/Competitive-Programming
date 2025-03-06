#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n;
    cin>>n;
    ll total=0;
    for(int i=0;i<n;i++){
        ll a;cin>>a;
        total+=a;
    }
    if(total%n==0){
        cout<<n<<endl;
    }
    else{
        cout<<n-1<<endl;
    }
}
