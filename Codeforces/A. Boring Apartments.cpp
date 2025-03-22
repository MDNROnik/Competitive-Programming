#include<bits/stdc++.h>
using namespace std;
int main(){
    int test,num,k=1,count,j=0,r=10,c=1;
    cin>>test;
    while(test--){
        cin>>num;count=0,j=1,r=10,c=1,k=1;
        if(num==1){cout<<1<<endl;}
        else{
            while(k != num){
            if(j<=4){
                count+=j;j++;
            }
            //else{j=1;}
            if(j<=4){
                k+=r;r*=10;
            }
            else{
                ++c;k=c;r=10*c;j=1;
            }
          }
          j;
          cout<<j+count<<endl;
        }
    }
    return 0;
}

 