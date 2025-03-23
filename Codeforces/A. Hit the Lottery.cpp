#include<bits/stdc++.h>
using namespace std;
int main(){
    int total,de=0;
    cin>>total;

    while(total!=0){
        if(total>=100){
            de+=(total/100);
            total%=100;
        }
        else if(total>=20){
            de+=(total/20);
            total%=20;
        }
        else if(total>=10){
            de+=(total/10);
            total%=10;
        }
        else if(total>=5){
            de+=(total/5);
            total%=5;
        }
        else if(total>=1){
            de+=(total/1);
            total%=1;
        }
    }
    cout<<de<<endl;
    return 0;
}

 