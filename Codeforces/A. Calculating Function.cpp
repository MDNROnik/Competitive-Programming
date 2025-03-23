#include<bits/stdc++.h>
using namespace std;
int main(){
    long long num,i=2,total=-1;
    cin>>num;
    /*while(num>=i){
        if(i%2==0){total+=i;}
        else{total-=i;}
        i++;
    }*/

    if(num%2==0){
        cout<<num/2<<endl;
    }
    else{
        num+=1;
        cout<<-num/2<<endl;
    }
    return 0;
}

 