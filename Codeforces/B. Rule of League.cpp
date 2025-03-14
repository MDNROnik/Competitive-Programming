#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll test;cin>>test;
    while(test--){
        ll n,x,y;
        ll maxx=0;
        cin>>n>>x>>y;
        maxx=max(x,y);
        ll minn=0;
        minn=min(x,y);
        if((x>0 && y>0) || (x==0 && y==0)){
            cout<<-1<<endl;
        }
        else{
            n--;
            //cout<<n%maxx<<endl;
            if(n%maxx == minn){
                ll temp=1,count=0;
                for(int i=1;i<=n;i++){
                    count++;
                    cout<<temp<<" ";
                    if(count==maxx){
                        temp=i+2;
                        count=0;
                    }
                }
                cout<<endl;
            }
            else{
                cout<<-1<<endl;
            }
        }
    }


    return 0;
}