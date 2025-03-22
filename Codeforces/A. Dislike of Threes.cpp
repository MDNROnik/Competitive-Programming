#include<bits/stdc++.h>
using namespace std;
int main(){
    int test,j,res=0;
    cin>>test;
    int num,k=0,i=0;
    while(test--){
        cin>>num;i=1,j=1;
        while(i<=num){
            k=j%10;
            if(j%3 != 0){
                if(j%10==3){

                }
                else{
                    i++;res=j;
                }
            }
            j++;
        }
        cout<<res<<endl;
    }
    return 0;
}

 