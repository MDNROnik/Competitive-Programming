#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int i,j;
    int c1=1;
    int leftw[n],left[n],rightw[n],right[n];
    for(i=0,j=1;i<n;i++){
        leftw[i]=j;j++;
        rightw[i]=j;j++;
    }
    for(i=0;i<n;i++){
        left[i]=j;j++;
        right[i]=j;j++;
    }
    for(i=0;i<n;i++){
        if(left[i]>m){

        }
        else{
            cout<<left[i]<<" ";
        }
        if(leftw[i]>m){

        }
        else{
            cout<<leftw[i]<<" ";
        }
        if(right[i]>m){

        }
        else{
            cout<<right[i]<<" ";
        }
        if(rightw[i]>m){

        }
        else{
            cout<<rightw[i]<<" ";
        }
    }
    return 0;
}