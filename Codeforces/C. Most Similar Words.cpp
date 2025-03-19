#include <bits/stdc++.h>
using namespace std;
#define intl long long
int main(){
    int test;
    cin>>test;
    while(test--){
        int n,si;
        cin>>n>>si;
        string s[n];
        for(int i=0;i<n;i++){
            cin>>s[i];
        }
        int mini=10000,temp=0;
        vector<int>vec,vec2;
        for(int i=0;i<n;i++){
            int a,b;
            for(int k=0;k<si;k++){
                a=s[i][k];
                vec.push_back(a);
            }
            for(int j=i+1;j<n;j++){
                for(int l=0;l<si;l++){
                    a=s[j][l];
                    vec2.push_back(a);
                }
                for(int m=0;m<si;m++){
                    if(vec[m]<vec2[m]){
                        temp+=(vec2[m]-vec[m]);
                    }
                    else if(vec[m]>vec2[m]){
                        temp+=(vec[m]-vec2[m]);
                    }
                }
                vec.clear();vec2.clear();
                if(mini>temp){
                    mini=temp;
                }
                temp=0;
            }
        }
        cout<<mini<<endl;

    }

    return 0;
}