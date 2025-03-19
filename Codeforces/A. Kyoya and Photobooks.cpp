#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int a=26;
    for(int i=0;i<s.size();i++){
        a+=25;
    }
    cout<<a<<endl;
    return 0;

}