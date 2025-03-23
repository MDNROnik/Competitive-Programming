#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,t2,num,count=0;
    cin>>t;
    t2=t;
    while(t--){
        cin>>num;
        if(num==0){
            count++;
        }
        else{
            break;
        }
    }
    if(count==t2){cout<<"EASY"<<endl;}
    else{cout<<"HARD"<<endl;}
    return 0;
}
 