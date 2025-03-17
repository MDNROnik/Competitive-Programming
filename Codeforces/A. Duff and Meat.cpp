#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    long long n;
    cin>>n;
    int a[n],p[n],pr=0,index=0;
    for(int i=0;i<n;i++){
        cin>>a[i]>>p[i];

    }
    index=p[0];
    for(int i=0;i<n;i++){
        if(index<=p[i]){pr+=(a[i]*index);}
        else{pr+=(a[i]*p[i]);index=p[i];}
    }
    cout<<pr<<endl;

    return 0;
}