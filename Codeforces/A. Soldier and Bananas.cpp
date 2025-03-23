#include<bits/stdc++.h>
using namespace std;
int main(){
    int cost,amont,need,total=0;
    cin>>cost>>amont>>need;

    while(need!=0){
        total+=(cost*need);
        need--;
    }
    if(total>amont){
        cout<<total-amont<<endl;
    }
    else{
        cout<<0<<endl;
    }


    return 0;
}
 