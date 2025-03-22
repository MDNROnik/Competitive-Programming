#include<bits/stdc++.h>
using namespace std;
int main(){
    int num,s,total=0;
    cin>>num>>s;

    if(s%num==0){
        cout<<s/num<<endl;
    }
    else{
        total=s/num;
        total++;
        cout<<total<<endl;
    }
    return 0;
}