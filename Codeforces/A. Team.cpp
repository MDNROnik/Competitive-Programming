#include<bits/stdc++.h>
using namespace std;
int main(){
    int c,num,cou=0,sol=0;
    cin>>c;

    while(c!=0){
        c--;
        for(int i=0;i<3;i++){
            cin>>num;
            if(num==1){cou++;}
        }
        if(cou>=2){
            sol++;
        }
        cou=0;
    }
    cout<<sol<<endl;

    return 0;
}

 