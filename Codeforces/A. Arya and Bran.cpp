#include<bits/stdc++.h>
#include <string>
#include <sstream>
using namespace std;
int main(){
    int n,k,num,count=0,total=0,k2=0,tem=0,c=0;
    cin>>n>>k;
    while(n--){
        cin>>num;
        if(num>=8){
            total+=num-8;
            num=8;
        }
        else{
            tem=8-num;
            //cout<<tem<<endl;
            if(total!=0){
                if(tem<=total){
                    total-=tem;
                    num+=tem;
                }
                else{
                    num+=total;
                    total=0;
                }
            }
        }
        //cout<<num<<endl;
        k2+=num;

        if(k2>=k && c==0){
            k2=k;
            c++;
        }
        //cout<<"give "<<k2<<endl;
        if(k2<=k){
            count++;
        }
        if(k2==k){
            break;
        }
    }

    if(k2==k){
        cout<<count<<endl;
    }
    else{
        cout<<-1<<endl;
    }

    return 0;
}

 