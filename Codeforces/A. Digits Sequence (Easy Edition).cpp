#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s,s2;
    for(int i=1;i<=10000;i++){
        stringstream ss;
        ss<<i;
        s2=ss.str();
        s+=s2;
    }
    cout<<s[n-1]<<endl;
    return 0;
}