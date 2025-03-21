#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,b,d,num,count=0,col=0;
    cin>>n>>b>>d;
    while(n--){
        cin>>num;
        if(num<=b){
            col+=num;
        }
        if(col>d){
            count++;
            col=0;
        }
    }
    cout<<count<<endl;

    return 0;
}

 