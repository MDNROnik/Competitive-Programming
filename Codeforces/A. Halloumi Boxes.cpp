#include <bits/stdc++.h>
using namespace std;


int main() {
    int test;
    cin>>test;
    while(test--){
        int n,k;cin>>n>>k;
        int pre=-1;
        int count=0;
        for(int i=0;i<n;i++){
            int a;cin>>a;
            if(pre>a){count++;}
            swap(pre,a);
        }
        if(k>1){
            cout<<"YES"<<endl;
        }
        else{
            if(count==0){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}