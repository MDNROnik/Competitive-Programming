#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n,m,a,count=0;
    cin>>n>>m>>a;
    if(n%a==0){count=n/a;}
    else{n/=a;++n;count+=n;}

    //cout<<count<<endl;
    if(m%a==0){count*=m/a;}
    else{m/=a;++m;count*=m;}
    cout<<count<<endl;
    return 0;
}

 