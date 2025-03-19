#include <bits/stdc++.h>
using namespace std;
#define intl long long
int main(){
    int n;
    cin>>n;
    int maxx=0;
    int t,c,l,mes=0,temp=0;
    for(int i=1;i<=n;i++){
        cin>>t>>c;
        if(i==1){
            l=t;
            mes+=c;
            if(mes>maxx){maxx=mes;}
        }
        else{
            temp=t-l;
            l=t;
            if(temp>=mes){mes=0;}
            else{
                mes-=temp;
            }
            mes+=c;
            if(mes>maxx){maxx=mes;}
        }
    }
    cout<<l+mes<<" "<<maxx<<endl;

    return 0;
}