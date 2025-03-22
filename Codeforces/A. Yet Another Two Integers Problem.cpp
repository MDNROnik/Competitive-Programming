#include<bits/stdc++.h>
#include<list>
using namespace std;
int main(){

   long long test,count=0;
   cin>>test;
   long long n1,n2,temp=0;
   while(test--){
    cin>>n1>>n2;
    count=0;
    if(n1==n2){}
    else if(n1<n2){
        temp=n2-n1;
        while(temp!=0){
            if(temp>=10){count+=(temp/10);temp%=10;}
            else if(temp==9){count+=(temp/9);temp%=9;}
            else if(temp==8){count+=(temp/8);temp%=8;}
            else if(temp==7){count+=(temp/7);temp%=7;}
            else if(temp==6){count+=(temp/6);temp%=6;}
            else if(temp==5){count+=(temp/5);temp%=5;}
            else if(temp==4){count+=(temp/4);temp%=4;}
            else if(temp==3){count+=(temp/3);temp%=3;}
            else if(temp==2){count+=(temp/2);temp%=2;}
            else if(temp==1){count+=temp;temp=0;}
        }
    }
    else{
        temp=n1;n1=n2;n2=temp;
        temp=n2-n1;
        while(temp!=0){
            if(temp>=10){count+=(temp/10);temp%=10;}
            else if(temp==9){count+=(temp/9);temp%=9;}
            else if(temp==8){count+=(temp/8);temp%=8;}
            else if(temp==7){count+=(temp/7);temp%=7;}
            else if(temp==6){count+=(temp/6);temp%=6;}
            else if(temp==5){count+=(temp/5);temp%=5;}
            else if(temp==4){count+=(temp/4);temp%=4;}
            else if(temp==3){count+=(temp/3);temp%=3;}
            else if(temp==2){count+=(temp/2);temp%=2;}
            else if(temp==1){count+=temp;temp=0;}
        }
    }
    cout<<count<<endl;

   }

    return 0;
}
 