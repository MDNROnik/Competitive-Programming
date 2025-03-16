#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    ios_base::sync_with_stdio(false);
    ll test;cin>>test;
    while(test--){
        string s,s2;cin>>s>>s2;
        if(s[s.size()-1] ==s2[s2.size()-1]){
            if(s[s.size()-1]=='S'){
                if(s.size()==s2.size()){
                    cout<<"="<<endl;
                }
                else if(s.size()<s2.size()){
                    cout<<">"<<endl;
                }
                else{
                    cout<<"<"<<endl;
                }continue;
            }
            if(s.size()==s2.size()){
                cout<<"="<<endl;
            }
            else if(s.size()<s2.size()){
                cout<<"<"<<endl;
            }
            else{
                cout<<">"<<endl;
            }
        }
        else{
            ll t=s[s.size()-1];
            ll t2=s2[s2.size()-1];
            if(t<t2){
                cout<<">"<<endl;
            }
            else{
                cout<<"<"<<endl;
            }
        }
    }
}