#include <bits/stdc++.h>
#include<string>
using namespace std;
int main(){
    int r,b,count=0,count2=0;
    cin>>r>>b;
    if(r<b){
        count+=r;
        b-=r;
        b/=2;
        count2+=b;
    }
    else{
        count+=b;
        r-=b;
        r/=2;
        count2+=r;
    }
    cout<<count<<" "<<count2<<endl;
    return 0;
}

 