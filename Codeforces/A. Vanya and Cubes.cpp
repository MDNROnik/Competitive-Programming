#include<bits/stdc++.h>
using namespace std;
int main(){
    int num,c=0,c2=0,count=0;
    cin>>num;
    for(int i=1;i<=num;i++){
        c+=i;
        c2+=c;
        if(c2<=num){
            count++;
        }
        else{
            break;
        }
    }
    cout<<count<<endl;
    return 0;
}

 