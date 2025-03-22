#include<bits/stdc++.h>
#include<list>
using namespace std;
int main(){
    int test,a2,b2;cin>>test;
    int mi,a,b;
    while(test--){
        cin>>a>>b;
        if(a<b){
            swap(a,b);
        }
        //cout<<a<<endl<<b<<endl;
        a2=a*a;
        b2=b+b;
        //cout<<a2<<endl<<b2<<endl;
        if(a==b){
            cout<<(a+a)*(a+a)<<endl;
        }
        else if(a<=b2){
            cout<<b2*b2<<endl;
        }
        else{
            cout<<a*a<<endl;
        }

    }

    return 0;
}
 