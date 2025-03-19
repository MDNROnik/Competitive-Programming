#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    string s[n];
    for(int i=0;i<n;i++){
        cin>>s[i];
    }
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            for(int k=0;k<n;k++){
                if(s[i][j]==s[k][j] && i!=k){
                    count=1;break;
                }
            }
            if(count==0){
                for(int l=0;l<m;l++){
                    if(s[i][j]==s[i][l] && j!=l){
                        count+=1;break;
                    }
                }
            }
            if(count==0){
                cout<<s[i][j];
            }
            count=0;
        }
    }

    return 0;
}
 