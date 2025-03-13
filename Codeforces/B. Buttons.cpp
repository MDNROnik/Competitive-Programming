#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n=1e+9;
int main(){
    ll n;
    cin>>n;
    ll count=0,total=0;
    while(n--){
        ll temp=count+1;
        temp*=n;
        temp+=1;
        total+=temp;
        count++;
    }
 
    cout<<total<<endl;
 
    return 0;
}