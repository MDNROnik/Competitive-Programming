#include <bits/stdc++.h>
using namespace std;
#define intl long long
int main(){
    intl test,n,mi,ma,n2,coun=0;
    cin>>test;
    while(test--){
        mi=0;
        ma=0;
        cin>>n;
        n2=n;
        coun=0;
        //max
        if(n<4){coun=1;}
        if(n%4==0){
            ma=n/4;
        }
        else if(n%4==2){
            ma=n/4;
        }
        else{coun=1;}

        if(n2%6==0){
            mi=n2/6;
        }
        else if(n2%6==4){
            mi=n2/6;
            mi++;
        }
        else if(n2%6==2){
            mi=n2/6;
            mi++;
        }
        else{coun=1;}

        if(coun==1){
            cout<<-1<<endl;
        }
        else{
            cout<<mi<<" "<<ma<<endl;
        }
    }
    return 0;
}