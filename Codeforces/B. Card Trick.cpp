#include <bits/stdc++.h>
using namespace std;
#define ll long long
vector<int>arr;
int main(){
    int test;
    cin>>test;
    while(test--){
        int n,m,track=0,a;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        cin>>m;
        for(int i=0;i<m;i++){
            cin>>a;
            if(i==0){track=a;}
            else {
                int temp;
                if((track+a) > (n-1)){
                    temp=(n-1)-track;
                    a-=temp;
                    track=a-1;
                }
                else{
                    track+=a;
                }
            }
        }
        cout<<arr[track]<<endl;

    }
    return 0;
}