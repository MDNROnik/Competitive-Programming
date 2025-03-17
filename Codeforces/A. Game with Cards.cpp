#include <bits/stdc++.h>
using namespace std;
#define ll long long
vector<int>arr;
int main(){
    int test;
    cin>>test;
    while(test--){
        int n,m,a,b,alice=0,bob=0;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>a;
            if(alice<a){alice=a;}
        }
        cin>>m;
        for(int i=0;i<m;i++){
            cin>>b;
            if(bob<b){bob=b;}
        }
        //cout<<alice<<" "<<bob<<endl;
        if(alice>=bob){
            cout<<"Alice"<<endl;
        }
        else{
            cout<<"Bob"<<endl;
        }
        if(bob>=alice){
            cout<<"Bob"<<endl;
        }
        else{
            cout<<"Alice"<<endl;
        }
    }
    return 0;
}