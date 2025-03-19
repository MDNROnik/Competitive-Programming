#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;
    if(n%2==0){
        long long a=n/2;
        //cout<<endl<<a<<endl;
        if(a%2!=0){a+=1;}
        long long x=(a-1)-1;
        //cout<<endl<<a<<endl;
        if(x<2){
            if(x>=0){
                cout<<x<<endl;
            }
            else{
                cout<<0<<endl;
            }
        }
        else{
            cout<<x/2<<endl;
        }
    }
    else{
        cout<<0<<endl;
    }

    return 0;
}
 