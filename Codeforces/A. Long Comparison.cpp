#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll test;cin>>test;
    while(test--){
        string x;ll p;
        string x1;ll p1;
        cin>>x>>p;
        cin>>x1>>p1;

        if( (x.size()+p ) > (x1.size()+p1) ){
            cout<<">"<<endl;
        }
        else if( (x.size()+p ) < (x1.size()+p1) ){
            cout<<"<"<<endl;
        }
        else{
            ll i=0,c=0;
            for(;i<x.size()+p;i++){
                ll t=0;
                ll t2=0;
                if(i < x.size()){
                    t=x[i]-'0';
                }
                else{
                    t=0;
                }
                if(i < x1.size()){
                    t2=x1[i]-'0';
                }
                else{
                    t2=0;
                }
                if(i>=x.size() && i>=x1.size()){
                    break;
                }


                if(t>t2){
                    cout<<">"<<endl;c++;break;
                }
                else if(t<t2){
                    cout<<"<"<<endl;c++;break;
                }
            }
            if(c==0){
                cout<<"="<<endl;
            }
        }
    }
    return 0;
}