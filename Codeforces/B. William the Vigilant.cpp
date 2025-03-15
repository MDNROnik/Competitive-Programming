#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios_base::sync_with_stdio(false);
    ll n,q;cin>>n>>q;
    string s;
    cin>>s;
    ll c=0,count=0;
    if(n<3){
        while(q--){
            ll pos;cin>>pos;
            string s2;cin>>s2;
            cout<<0<<endl;
        }
    }
    else{
        for(int i=0;i<n;i++){
            if(s[i]=='a'){
                if(i+1<n && i+2<n){
                    if(s[i+1]=='b' && s[i+2]=='c'){
                        count++;
                    }
                }
            }
        }
        //cout<<"first "<<count<<endl;
        while(q--){
            ll pos;cin>>pos;
            string s2;cin>>s2;
            ll c=0;
            if(s2[0]=='a'){
                if(s[pos-1]=='a'){c++;}
                if(s[pos-1]=='b' && s[pos-2]=='a' && s[pos]=='c' && pos-2>=0 && pos<n){
                    count--;
                }
                else if(s[pos-1]=='c' && s[pos-2]=='b' && s[pos-3]=='a' && pos-2>=0 && pos-3>=0){
                    count--;
                }
                s[pos-1]='a';
                if(s[pos]=='b' && c==0 && s[pos+1]=='c' && pos<n && pos+1<n){
                    count++;
                }
            }
            else if(s2[0]=='b'){
                if(s[pos-1]=='b'){c++;}
                if(s[pos-1]=='a' && s[pos]=='b' && s[pos+1]=='c' && pos<n && pos+1<n){
                    count--;
                }
                else if(s[pos-1]=='c' && s[pos-2]=='b' && s[pos-3]=='a' && pos-2>=0 && pos-3>=0){
                    count--;
                }
                s[pos-1]='b';
                if(s[pos]=='c' && c==0 && s[pos-2]=='a' && pos<n && pos-2>=0){
                    count++;
                }
            }
            else if(s2[0]=='c'){
                if(s[pos-1]=='c'){c++;}
                if(s[pos-1]=='a' && s[pos]=='b' && s[pos+1]=='c' && pos<n && pos+1<n){
                    count--;
                }
                else if(s[pos-1]=='b' && s[pos-2]=='a' && s[pos]=='c' && pos-2>=0 && pos<n){
                    count--;
                }
                s[pos-1]='c';
                if(s[pos-2]=='b' && c==0 && s[pos-3]=='a' && pos-2>=0 && pos-3>=0){
                    count++;
                }
            }
            cout<<count<<endl;
        }
    }

    return 0;
}