#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll test;cin>>test;
    while(test--){
        ll n,k,kk,i=97;
        cin>>n>>k;kk=k;
        string s;
        while(n--){
            if(i == (97+kk)){
                i=97;
            }

            s.push_back(i);
            i++;
        }
        cout<<s<<endl;
    }

    return 0;
}