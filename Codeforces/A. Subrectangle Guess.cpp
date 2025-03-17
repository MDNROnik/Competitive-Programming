#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll test;
    cin>>test;
    while(test--){
        ll n,m;
        ll r=1,c=1;
        ll rc,cc,total=0,big=-1000000000,jj=0,ii=0;
        cin>>n>>m;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int a;cin>>a;
                if(big<a){jj=j;big=a;ii=i;}
            }
        }
        ii++;jj++;
        if(jj < (m-(jj-1))){c=(m-(jj-1));}
        else if(jj > (m-(jj-1))){c=jj;}
        else if(jj == (m-(jj-1))){c=jj;}
        if(ii < (n-(ii-1))){r=(n-(ii-1));}
        else if(ii > (n-(ii-1))){r=ii;}
        else if(ii == (n-(ii-1))){r=ii;}


        total=r*c;
        cout<<total<<endl;
    }
    return 0;
}