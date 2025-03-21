#include<bits/stdc++.h>
#include <string>
#include <sstream>
using namespace std;
int main(){
    long long test,a,b,c,d,k,spa=0,spb=0;
    cin>>test;
    while(test--){
        cin>>a>>b>>c>>d>>k;

        if(a>c){
            if(a%c==0){a=a/c;spa=a;}
            else{
                a=a/c;a++;spa=a;
            }
        }
        else if(a==c){a=a/c;spa=a;}
        else if(a<c){a=1;spa+=a;}
        //cout<<a<<" "<<spa<<endl;
        if(b>d){
            if(b%d==0){b=b/d;spb=b;}
            else{
                b=b/d;b++;spb=b;
            }
        }
        else if(b==d){b=b/d;spb=b;}
        else if(b<d){b=1;spb+=b;}
        //cout<<b<<" "<<spb<<endl;


        if(spa+spb <= k){
            cout<<spa<<" "<<spb<<endl;
        }
        else{
            cout<<-1<<endl;
        }
        spa=0;spb=0;
    }

    return 0;
}