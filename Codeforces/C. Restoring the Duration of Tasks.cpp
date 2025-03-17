#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    long long test;
    cin>>test;
    while(test--){
        long long n;
        cin>>n;
        long long a[n],b[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        cout<<b[0]-a[0]<<" ";
        for(int i=1;i<n;i++){
            if(b[i-1]<= a[i]){cout<<b[i]-a[i]<<" ";}
            else{
                cout<<b[i]-b[i-1]<<" ";
            }
        }
        cout<<endl;

    }
    return 0;
}