#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll test;
    cin>>test;
    while(test--){
        int zero,one;
        cin>>zero>>one;
        int zo=0;
        if(zero==one){
            while( zero!=0 && one!=0){
                cout<<'1';one--;
                cout<<'0';zero--;
            }
        }
        else if(zero>one){
            if(zero/2 >= one){
                for(int i=1;i<=one;i++){cout<<'1';}
                for(int i=1;i<=zero;i++){cout<<'0';}
            }
            else{
                while( zero!=0 || one!=0){
                    if(zero>0){cout<<'0';zero--;}
                    if(one>0){cout<<'1';one--;}
                }
            }
        }
        else if(zero<one){
            if(one/2 >=zero){
                for(int i=1;i<=zero;i++){cout<<'0';}
                for(int i=1;i<=one;i++){cout<<'1';}
            }
            else{
                while( zero!=0 || one!=0){
                    if(one>0){cout<<'1';one--;}
                    if(zero>0){cout<<'0';zero--;}
                }
            }
        }
        cout<<endl;
    }
    return 0;
}