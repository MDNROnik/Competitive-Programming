#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){

        ll n;cin>>n;
        ll week = n/7;
        ll weekend=n%7;
        if(weekend > 5){
            cout<<(week*2)+(7-weekend)<<" ";
        }
        else{
            cout<<(week*2)<<" ";
        }
        if(weekend<=2){
            cout<<(week*2)+weekend<<endl;
        }
        else{
            cout<<(week*2)+2<<endl;
        }
    return 0;
}
 