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
        ll a, b, x, y;
        cin>>a>>b;
        x=a; y=b;
        ll downAns=0, downCount=0;
        ll upAns=0, upCount=0;
        if(abs(a-b)==1){
            cout<<1<<" "<<0<<endl;continue;
        }
        if(a==b){
            cout<<0<<" "<<0<<endl;continue;
        }
        ll now = abs(a-b);
        ll mini = min(a,b);
        ll dif = mini%now;
        cout<<now<<" "<<min(now-dif, dif)<<endl;
 
    }
 
    return 0;
}