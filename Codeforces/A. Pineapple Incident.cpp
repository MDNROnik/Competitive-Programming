#include <bits/stdc++.h>
using namespace std;
int main(){
    long long i, t,s,x;
    cin>>t>>s>>x;
    long long temp=0;
    temp=t;
    if(x==temp){
        cout<<"YES"<<endl;
    }
    else{
        for(i=1;;i++){
            temp=(t+(i*s));
            if(temp==x){cout<<"YES"<<endl;break;}
            else if(temp>x){cout<<"NO"<<endl;break;}
            temp=(t+(i*s))+1;
            if(temp==x){cout<<"YES"<<endl;break;}
            else if(temp>x){cout<<"NO"<<endl;break;}
        }
    }

    return 0;
}