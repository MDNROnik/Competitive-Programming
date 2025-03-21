#include<bits/stdc++.h>
#include <string>
#include <sstream>
using namespace std;
int main(){
    unsigned long long test,n,k,count=0,remain;
    cin>>test;
    while(test--){
        cin>>n>>k;
        while(n!=0){
            if(n%k==0){
                n/=k;
                count++;
            }
            else{
                remain=n%k;
                count+=remain;
                n-=remain;
            }

        }
        cout<<count<<endl;
        count=0;
    }
    return 0;
}

 