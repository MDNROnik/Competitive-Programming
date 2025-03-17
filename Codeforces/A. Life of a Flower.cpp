#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    int test;
    cin>>test;
    vector<int>vec;
    while(test--){
        int n;cin>>n;
        int arr[n],in=1;
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        if(arr[0]==1){in++;}
        for(int i=1;i<n;i++){
            if(arr[i]==1 && arr[i-1]==0){in++;}
            else if(arr[i]==1 && arr[i-1]==1){in+=5;}
            else if(arr[i]==0 && arr[i-1]==0){in=-1;break;}
        }
        cout<<in<<endl;
    }
    return 0;
}