#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    long long test;
    cin>>test;
    while(test--){
        long long n,temp,second,first,third,th;
        cin>>n;
        if(n%2 != 0){
            second=n/3;
            if(((second+1) +second +(second-1))==n){
                first=second;third=second-1;second=second+1;
            }
            else {
                second+=2;
                n-=second;
                if(n%2 == 0){
                    first=n/2;first++;third=n-first;
                }
                else{
                    first=n/2;first++;third=n-first;
                }
            }
        }
        else{
            second=n/3;
            if(((second+1) +second +(second-1))==n){
                first=second;third=second-1;second=second+1;
            }
            else{
                second=second+2;
                n-=second;
                if(n%2 == 0){
                    first=n/2;first++;third=n-first;
                }
                else{
                    first=n/2;first++;third=n-first;
                }
            }
        }
        cout<<first<<" "<<second<<" "<<third<<endl;
    }
    return 0;
}