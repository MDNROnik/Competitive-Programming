#include<bits/stdc++.h>
using namespace std;
int main(){
    int test,h,m,total;
    cin>>test;
    while(test--){
        cin>>h>>m;
        total=(24-h)*60;
        total-=m;
        cout<<total<<endl;
    }
    return 0;
}

 