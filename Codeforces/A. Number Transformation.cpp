#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    while(test--){
        int x,y;
        cin>>x>>y;
        if(x<=y){
            //cout<<1<<" "<<y/x<<endl;
            if(y%x==0){
                cout<<1<<" "<<y/x<<endl;
            }
            else{
                cout<<0<<" "<<0<<endl;
            }
        }
        else{
            cout<<0<<" "<<0<<endl;
        }
    }
    return 0;
}
 