#include <bits/stdc++.h>
using namespace std;
#define ll long long
vector<string>arr;
int main(){
    int test;
    cin>>test;
    while(test--){
        int n,sm=100000000,a,sum=0;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>a;
            sum+=a;
            if(a<sm){
                sm=a;
            }
        }
        //cout<<sm<<endl;
        sm*=n;
        cout<<sum-sm<<endl;

    }
    return 0;
}