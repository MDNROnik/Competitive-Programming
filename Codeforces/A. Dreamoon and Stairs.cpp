#include <bits/stdc++.h>
using namespace std;
#define ll long long
vector<string>arr;
map<int,int>mp;
map<int,int>::iterator it;
int main(){
    ll n,m;cin>>n>>m;
    ll steps=0;
    if(n%2==0){
        steps=n/2;
    }
    else{
        steps=(n/2)+1;
    }
    if(n<m){
        cout<<-1<<endl;
    }
    else{
        while(1){
            if(steps%m==0){
                cout<<steps<<endl;break;
            }
            else{
                steps++;
            }
        }
    }
    return 0;
}