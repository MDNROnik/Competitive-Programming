#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    vector<string> s1;
    vector<string> s2;
    string s;
    for(int i=0;i<n;i++){
        cin>>s;
        s1.push_back(s);
    }
    for(int i=0;i<m;i++){
        cin>>s;
        s2.push_back(s);
    }
    int test,index=0,s1i,s2i;cin>>test;

    while(test--){
        cin>>index;

        if(index==0){s1i=index;}
        else if(index<=n){
            s1i=index-1;
        }
        else if(index%n == 00){
            s1i=n-1;
        }
        else{
            s1i=(index%n)-1;
        }

        if(index==0){s2i=index;}
        else if(index<=m){
            s2i=index-1;
        }
        else if(index%m == 00){
            s2i=m-1;
        }
        else{
            s2i=(index%m)-1;
        }
        cout<<s1[s1i]<<s2[s2i]<<endl;
        //cout<<s1i<<" "<<s2i<<endl;
    }
    return 0;
}



 