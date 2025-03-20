#include <bits/stdc++.h>
using namespace std;
int main(){
    long long num,time;
    cin>>num>>time;
    long long f,t;
    long long total=-999999999,temp=0;
    while(num--){
        cin>>f>>t;
        if(t>time){
            temp=f-(t-time);
        }
        else{
            temp=f;
        }
        if(total<temp){
            total=temp;
        }
    }
    cout<<total<<endl;
    return 0;
}
 