#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n,m,tem=0,j=0,i=0,total=0,c=0;
    cin>>n>>m;
    long long arr[m],brr[m];
    for( i=0;i<m;i++){
        cin>>arr[i]>>brr[i];
    }
    for(int k=0;k<m;k++){
        for( i=1;i<m;i++){
            if(brr[i-1]<brr[i]){
                tem=brr[i-1];
                brr[i-1]=brr[i];
                brr[i]=tem;
                tem=arr[i-1];
                arr[i-1]=arr[i];
                arr[i]=tem;
            }
        }
    }
    i=0;

    while(n!=0){

        if(n<arr[i]){
            total+=(n*brr[i]);
            n-=n;c++;
        }
        else if(n>=arr[i]){
            total+=(arr[i]*brr[i]);
            n-=arr[i];c++;
        }
        if(c==m){break;}
        i++;
    }

    cout<<total<<endl;
    return 0;
}


 