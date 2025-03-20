#include <bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cin>>num;
    int arr[num],sw=0,s1=0,s0=0,temp2=0,temp3=0;
    for(int i=0;i<num;i++){
        cin>>arr[i];
    }
    int maxx=0,temp=0;
    if(arr[0]==1 && arr[num-1]==1){
        maxx=2;
    }
    if(maxx==0){
        for(int i=0;i<num;i++){
            if(arr[i]==1){
                temp++;
            }
            else{
                if(temp>maxx){maxx=temp;}temp=0;
            }
        }
        if(temp>maxx){maxx=temp;}
        cout<<maxx<<endl;
    }
    else{
        temp=maxx;
        for(int i=1;i<num-1;i++){
            if(arr[i]==1){
                temp++;
                //s1=1;
            }
            else{
                //cout<<temp<<endl;
                if(sw==0){temp2=temp;sw=1;}
                if(temp>maxx){maxx=temp;};
                //s0=1;
            }
            temp3=temp;
            if(arr[i]==0){temp=0;}
            //cout<<arr[i]<<" ";
        }
        if(arr[num-2]==1){
            temp=temp3+temp2;
        }
        //cout<<temp<<" "<<maxx<<endl;
        if(temp>maxx){maxx=temp;}
        cout<<maxx<<endl;
    }

    return 0;
}
 