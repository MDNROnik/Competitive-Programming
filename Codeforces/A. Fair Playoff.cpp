#include<bits/stdc++.h>
using namespace std;
int main(){
    int test,h[4],first,first2,second,second2,final,sec;
    cin>>test;
    while(test--){
        for(int i=0;i<4;i++){
            cin>>h[i];
        }
        if(h[0]>h[1]){first=h[0];first2=h[1];}
        else{first=h[1];first2=h[0];}

        if(h[2]>h[3]){second=h[2];second2=h[3];}
        else{second=h[3];second2=h[2];}

        if(first>second){
            if(second>first2){
                cout<<"YES"<<endl;
            }
            else{cout<<"NO"<<endl;}
        }
        else{
            if(first>second2){
                cout<<"YES"<<endl;
            }
            else{cout<<"NO"<<endl;}
        }
    }
    return 0;
}


 