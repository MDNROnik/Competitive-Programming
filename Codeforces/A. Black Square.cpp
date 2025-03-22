#include<bits/stdc++.h>
using namespace std;

int main() {
    int num=0,arr[4];
    for(int i=0;i<4;i++){
        cin>>arr[i];
    }
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++){
        if(s[i]=='1'){num+=arr[0];}
        else if(s[i]=='2'){num+=arr[1];}
        else if(s[i]=='3'){num+=arr[2];}
        else if(s[i]=='4'){num+=arr[3];}
    }
    cout<<num<<endl;

    return 0;
}

 