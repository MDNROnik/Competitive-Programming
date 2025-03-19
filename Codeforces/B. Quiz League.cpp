#include <bits/stdc++.h>
using namespace std;
int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int i;
    for(i=k;i<=n;){
        //cout<<i<<endl;
        if(arr[i-1]==1){break;}
        else{
            i++;
            if(i>n){i=1;}
        }
    }
    cout<<i<<endl;
    return 0;

}