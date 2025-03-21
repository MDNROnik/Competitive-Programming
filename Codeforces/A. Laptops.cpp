#include <bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    int ap,aq,bp,bq,alex=0;
    cin>>ap>>aq;
    test-=1;
    while(test--){
       cin>>bp>>bq;
       if(aq==ap ){
            ap=bp;aq=bq;
       }
       if(bq==bp ){
            bp=ap;bq=aq;
       }
       if(ap<bp ){
            if(aq>bq){
                alex=1;break;
            }
       }
       else{
            if(bq>aq){
                alex=1;break;
            }
       }
       //cout<<" new "<<ap<<" "<<aq<<endl;
    }
    if(alex==1){
        cout<<"Happy Alex"<<endl;
    }
    else{
        cout<<"Poor Alex"<<endl;
    }
    return 0;
}

 