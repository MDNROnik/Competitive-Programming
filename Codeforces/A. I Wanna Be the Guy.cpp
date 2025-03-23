#include<bits/stdc++.h>
using namespace std;
int main(){
    int num,count=0,i,j;
    cin>>num;
    int arr[num];
    for( i=0;i<num;i++){
        arr[i]=i+1;
    }
    int x,y;
    cin>>x;
    int p[x];
    for( i=0;i<x;i++){
        cin>>p[i];
    }
    cin>>y;
    int q[y];
    for( i=0;i<y;i++){
        cin>>q[i];
    }
    for( i=0;i<x;i++){
        for( j=0;j<num;j++){
            if(p[i]==arr[j]){arr[j]=0;break;}
        }
    }
    for( i=0;i<y;i++){
        for( j=0;j<num;j++){
            if(q[i]==arr[j]){arr[j]=0;break;}
        }
    }

    for( i=0;i<num;i++){
        if(arr[i]==0){count++;}
    }
    if(count==num){cout<<"I become the guy."<<endl;}
    else{cout<<"Oh, my keyboard!"<<endl;}

    return 0;
}
 