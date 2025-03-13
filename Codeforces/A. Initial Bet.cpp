#include<iostream>
using namespace std;
#define ll long long int

int main()
{
    ll count=0;
    ll n=5;
    while(n--){
        ll a;cin>>a;
        count+=a;
    }
    if(count%5==0 && count!=0){
        cout<<count/5<<endl;
    }
    else{
        cout<<-1<<endl;
    }
    return 0;
}