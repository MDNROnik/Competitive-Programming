#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,count=0,sw=0;
    cin>>n>>m;
    int arr[n][m];
    string s;
    for(int i=0;i<n;i++){
        cin>>s;
        for(int j=0;j<m;j++){
            if(s[j]=='.'){
                arr[i][j]=0;
            }
            else if(s[j]=='P'){
                arr[i][j]=1;
            }
            else if(s[j]=='W'){
                arr[i][j]=2;
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j]==2){
                if(arr[i-1][j]==1 && i-1>=0){count++;arr[i-1][j]--;}
                else if(arr[i+1][j]==1 && i+1<n){count++;arr[i+1][j]--;}

                else if(arr[i][j-1]==1 && j-1>=0){count++;arr[i][j-1]--;}
                else if(arr[i][j+1]==1 && j+1<m){count++;arr[i][j+1]--;}
            }
            sw=0;
        }
    }

    cout<<count<<endl;


    return 0;
}