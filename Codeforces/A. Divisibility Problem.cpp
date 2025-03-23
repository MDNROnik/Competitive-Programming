#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main(){
    long long test,a,b,count=0,c=0;
    cin>>test;
    /*while(test >0){
        cin>>a>>b;
        count=0;
        if(a%b == 0){cout<<count<<endl;}
        else{
            while(a%b != 0){
                a++;count++;
            }
            cout<<count<<endl;
        }
        test--;
    }*/
    for(int i=0;i<test;i++){
        cin>>a>>b;
        count=0;
        if(a%b == 0){cout<<count<<endl;}
        else{
            c=a/b;
            c=c+1;
            cout<<(c*b)-a<<endl;
        }
    }

    return 0;
}


 