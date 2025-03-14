#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll test;cin>>test;
    while(test--){
        ll a,b,c,r;cin>>a>>b>>c>>r;

        if(a>b){
            swap(a,b);
        }

        if(a<=c && c<=b){
            ll left = c-r;
            ll right = c+r;
            if(left <=a && right>=b){
                cout<<0<<endl;
            }
            else if(left>=a && b>=right){
                cout<<(left-a)+(b-right)<<endl;
            }
            else if(left<=a){
                cout<<b-right<<endl;
            }
            else{
                cout<<left-a<<endl;
            }
        }
        else if( c < a ){
             ll left=c+r;
             if(left < a){
                cout<<b-a<<endl;
             }
             else if(left > b){
                cout<<0<<endl;
             }
             else{
                cout<<b-left<<endl;
             }
        }
        else if( c > b ){
            ll right=c-r;
            if(right > b){
                cout<<b-a<<endl;
            }
            else if(right<a){
                cout<<0<<endl;
            }
            else{
                cout<<right-a<<endl;
            }
        }
    }
    return 0;
}