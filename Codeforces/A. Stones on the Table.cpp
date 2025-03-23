#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    int num,total=0;
    cin>>num>>s;

    for(int i=1;i<num;i++){
        if(s[i]==s[i-1]){
            total++;
        }
    }
    cout<<total<<endl;

    return 0;
}

 