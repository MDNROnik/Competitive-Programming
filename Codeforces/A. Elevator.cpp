#include <bits/stdc++.h>
using namespace std;
#define intl long long
int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    string s;
    cin>>s;
    int n;
    cin>>n;
    if(s[0]=='f' && n==1){cout<<"L"<<endl;}
    else if(s[0]=='f' && n==2){cout<<"R"<<endl;}
    else if(s[0]=='b' && n==1){cout<<"R"<<endl;}
    else if(s[0]=='b' && n==2){cout<<"L"<<endl;}



    return 0;
}