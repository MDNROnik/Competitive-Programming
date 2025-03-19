#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll test;
    cin>>test;
    while(test--){
        ll x,y,a,b,c;
        cin>>a>>b>>c>>x>>y;
        //cout<<a<<endl;
        
        if(x<=a){
            x=0;    
        }
        else{
            x-=a;
        }
        if(x>0){
            int t=x;
            x-=c;
            c-=t;
        }
        if(y<=b){
            y=0;    
        }
        else{
            y-=b;
        }
        if(y>0){
            int tt=y;
            y-=c;
        }
        
        
        
        
        if(x<=0 && y<=0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
	return 0;
}