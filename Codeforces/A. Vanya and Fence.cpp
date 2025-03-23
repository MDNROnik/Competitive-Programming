#include<bits/stdc++.h>
using namespace std;
int main(){
    int num,h,n,count=0;
    cin>>num>>h;
    for(int i=0;i<num;i++){
        cin>>n;
        if(n<=h){count++;}
        else{count+=2;}
    }
    cout<<count<<endl;
    return 0;
}
 