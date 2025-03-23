#include<bits/stdc++.h>
using namespace std;
int main(){
    int num,k,count=0,count2=0;
    cin>>num>>k;
    int n;
    for(int i=0;i<num;i++){
        cin>>n;
        n+=k;
        if(n<=5){
            count++;
        }
        if(count==3){
            count2++;count=0;
        }
    }
    cout<<count2<<endl;
    return 0;
}
 