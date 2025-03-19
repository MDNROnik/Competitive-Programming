#include <bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    while(test--){
        //cout<<test<<endl;
        int n;
        cin>>n;
        if(n%3==0){cout<<"YES"<<endl;}
        else if(n%7==0){cout<<"YES"<<endl;}
        else if(n==1 || n==2 || n==4 || n==5 || n==8){cout<<"NO"<<endl;}
        else{
            //for3
            int c=0;
            while(n!=0){
                n-=7;
                if(n<=0){break;}
                else if(n%3==0){cout<<"YES"<<endl;c=1;break;}
            }
            if(c==0){cout<<"NO"<<endl;}
        }
    }

    return 0;
}