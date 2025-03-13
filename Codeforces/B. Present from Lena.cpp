#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;cin>>n;
    ll l=n;l++;
    for(int i=0;i<l;i++){
        for(int j=i;j<l-1;j++){
            cout<<"  ";
        }
        for(int j=0;j<=i;j++){
            if(i==0){
                cout<<i;break;
            }
            cout<<j<<" ";
        }
        for(int j=i-1;j>=0;j--){
            if(j==0){
                cout<<j;break;
            }
            cout<<j<<" ";
        }
        cout<<endl;
    }
    l--;
    ll i=1;
    while(l--){
 
        for(int j=1;j<=i;j++){
            cout<<"  ";
        }
        for(int j=0;j<=l;j++){
            if(l==0){
                cout<<j;break;
            }
            cout<<j<<" ";
        }
        for(int j=l-1;j>=0;j--){
            if(j==0){
                cout<<j;break;
            }
            cout<<j<<" ";
        }
        i++;
        cout<<endl;
    }
 
 
 
    return 0;
}