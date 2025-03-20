#include<bits/stdc++.h>
using namespace std;
int main(){
    long long test;
    cin>>test;
    while(test--){
        long long num,mini=2147483647,n,maxi=0;
        cin>>num;
        for(long long i=0;i<num;i++){
            cin>>n;
            if(n<mini){
                mini=n;
            }
            if(n>maxi){
                maxi=n;
            }
        }
        cout<<maxi-mini<<endl;
    }
    return 0;

}
 