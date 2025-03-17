#include <bits/stdc++.h>
using namespace std;
#define ll long long
//const int N =1e7+10;
//long long arr[N];
int main(){
    ll n=5;
        ll arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        ll c;
        cin>>c;
        while(c--){
            string s;
            cin>>s;
            if(s[0]=='S'){
                if(arr[0]>0){
                    cout<<'S'<<endl;arr[0]--;
                }
                else if(arr[1]>0){
                    cout<<'M'<<endl;arr[1]--;
                }
                else if(arr[2]>0){
                    cout<<'L'<<endl;arr[2]--;
                }
                else if(arr[3]>0){
                    cout<<"XL"<<endl;arr[3]--;
                }
                else if(arr[4]>0){
                    cout<<"XXL"<<endl;arr[4]--;
                }
            }
            if(s[0]=='M'){
                if(arr[1]>0){
                    cout<<'M'<<endl;arr[1]--;
                }
                else if(arr[2]>0){
                    cout<<'L'<<endl;arr[2]--;
                }
                else if(arr[0]>0){
                    cout<<'S'<<endl;arr[0]--;
                }
                else if(arr[3]>0){
                    cout<<"XL"<<endl;arr[3]--;
                }
                else if(arr[4]>0){
                    cout<<"XXL"<<endl;arr[4]--;
                }
            }
            if(s[0]=='L'){
                if(arr[2]>0){
                    cout<<'L'<<endl;arr[2]--;
                }
                else if(arr[3]>0){
                    cout<<"XL"<<endl;arr[3]--;
                }
                else if(arr[1]>0){
                    cout<<'M'<<endl;arr[1]--;
                }
                else if(arr[4]>0){
                    cout<<"XXL"<<endl;arr[4]--;
                }
                else if(arr[0]>0){
                    cout<<"S"<<endl;arr[0]--;
                }
            }
            if(s[0]=='X' && s[1]=='L'){
                if(arr[3]>0){
                    cout<<"XL"<<endl;arr[3]--;
                }
                else if(arr[4]>0){
                    cout<<"XXL"<<endl;arr[4]--;
                }
                else if(arr[2]>0){
                    cout<<'L'<<endl;arr[2]--;
                }
                else if(arr[1]>0){
                    cout<<"M"<<endl;arr[1]--;
                }
                else if(arr[0]>0){
                    cout<<"S"<<endl;arr[0]--;
                }
            }
            if(s[0]=='X' && s[1]=='X'){
                if(arr[4]>0){
                    cout<<"XXL"<<endl;arr[4]--;
                }
                else if(arr[3]>0){
                    cout<<"XL"<<endl;arr[3]--;
                }
                else if(arr[2]>0){
                    cout<<'L'<<endl;arr[2]--;
                }
                else if(arr[1]>0){
                    cout<<"M"<<endl;arr[1]--;
                }
                else if(arr[0]>0){
                    cout<<"S"<<endl;arr[0]--;
                }
            }
        }


    return 0;
}
 