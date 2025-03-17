#include <bits/stdc++.h>
using namespace std;
#define ll long long
vector<string>arr;
int main(){
    int test;
    cin>>test;
    while(test--){
        int n,m;
        cin>>n>>m;
        int arr[n][m];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>arr[i][j];
            }
        }
        int sum=0,tesum=0;
        for(int i=0;i<n;i++){
            tesum=0;
            for(int j=0;j<m;j++){
                int k,l;
                k=i,l=j,tesum=0;
                //upleft
                while(k>=0 && l>=0){
                    tesum+=arr[k][l];
                    k--;l--;
                    //cout<<tesum<<" 1 "<<endl;
                }
                //upright
                k=i-1,l=j+1;
                while(k>=0 && l<m){
                    tesum+=arr[k][l];
                    k--;l++;
                    //cout<<tesum<<" 2 "<<endl;
                }
                //downleft
                k=i+1;l=j-1;
                while(k<n && l>=0){
                    tesum+=arr[k][l];
                    k++;l--;
                    //cout<<tesum<<" 3 "<<endl;
                }
                //downright
                k=i+1;l=j+1;
                while(k<n && l<m){
                    tesum+=arr[k][l];
                    k++;l++;
                    //cout<<tesum<<" 4 "<<endl;
                }
                //cout<<tesum<<endl;
                if(sum<tesum){
                    sum=tesum;
                }
            }
        }
        cout<<sum<<endl;
        //cout<<test<<endl;
    }
    return 0;
}