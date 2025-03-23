#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,count=1;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        if(i%2!=00){
            for(int j=0;j<m;j++){
                cout<<"#";
            }
            cout<<endl;
        }
        else if(i%2==0 && count%2!=0 ){
            for(int j=0;j<m-1;j++){
                cout<<".";
            }
            cout<<"#"<<endl;count++;
        }
        else if(i%2==0 && count%2==0 ){
            cout<<"#";
            for(int j=0;j<m-1;j++){
                cout<<".";
            }
            cout<<endl;count++;
        }
    }
    return 0;
}

 