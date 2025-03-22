#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    char c;
    cin>>n>>k;
    int j=97,l=0;
    for(int i=1;i<=n;i++){
        c=j;j++;l++;
        cout<<c;
        if(l==k){j=97;l=0;}
    }
    cout<<endl;

    return 0;
}

 