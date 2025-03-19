#include <bits/stdc++.h>
using namespace std;
#define intl long long
int main(){
    int test;
    cin>>test;
    while(test--){
        int n,m;
        cin>>n>>m;
        string s[n];
        for(int i=0;i<n;i++){
            cin>>s[i];
        }
        int countf=0,r=0;;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(s[i][j]=='R'){
                    r++;
                }
            }
        }
        int arr[r][2],ii=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(s[i][j]=='R'){
                    arr[ii][0]=i;arr[ii][1]=j;ii++;
                }
            }
        }
        for(int i=1;i<ii;i++){
            if(arr[0][0]>arr[i][0] || arr[0][1]>arr[i][1]){
                countf=1;break;
            }
        }
        if(countf==1){cout<<"NO"<<endl;}
        else{
            cout<<"YES"<<endl;
        }

    }
    return 0;
}