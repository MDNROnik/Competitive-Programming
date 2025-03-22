#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,c=0,w=0;
    cin>>n>>m;
    char ch;
    char arr[n][m];
    /*for(int i=0;i<n*m;i++){
        cin>>ch;
        if(ch=='C'||ch=='M'||ch=='Y'){
            c++;
        }
        else{w++;}
    }*/
    for(int i=0;i<n;i++){
        for( int j=0;j<m;j++){
            cin>>ch;
            arr[i][j]=ch;
            if(arr[i][j]=='C'||arr[i][j]=='M'||arr[i][j]=='Y'){
                c++;
            }
            else{w++;}
            }
    }

    if(c>0){cout<<"#Color"<<endl;}
    else{cout<<"#Black&White"<<endl;}
    return 0;
}
 