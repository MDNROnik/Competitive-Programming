#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;cin>>test;
    int num,remain,div;
    while(test--){
        cin>>num;
        div=num/2020;
        remain=num%2020;
        if(remain<=div){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }


    return 0;
}




 