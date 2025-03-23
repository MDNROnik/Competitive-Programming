#include<bits/stdc++.h>
#include <string>
using namespace std;
int main(){
    int t,n,x,count=1,i=0;
    cin>>t;
    while(t--){
        cin>>n>>x;
        count=1;i=2;
        if(n<3){cout<<1<<endl;}
        else{
            while(i<n){
                count++;
                i+=x;
            }
            cout<<count<<endl;
        }
    }
   return 0;
}








 