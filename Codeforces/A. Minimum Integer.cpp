#include<bits/stdc++.h>
#include <string>
#include <sstream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int test;
    cin>>test;
    long long l,r,d,c=1,i,j;
    while(test--){
        cin>>l>>r>>d;
        r+=1;l-=1;
        i=1;
        //cout<<l<<" "<<r<<endl;
        if(l%d >=0 && d<=l){
            l=0+d;
            cout<<d<<endl;
            c==0;
        }
        else {
            if(r%d==0){
                cout<<r<<endl;
            }
            else{
                j=r%d;
                r-=j;
                cout<<r+d<<endl;
            }
        }
        c=1;
    }
    return 0;
}

 