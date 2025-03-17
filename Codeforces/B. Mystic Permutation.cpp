#include <bits/stdc++.h>
using namespace std;
vector<long>vec;
int main(){
    ios_base::sync_with_stdio(false);
    long long test;
    cin>>test;
    while(test--){
        int n;
        cin>>n;
        int vec[n];
        int j, minn=1000000;
        for(int i=0;i<n;i++){
            cin>>vec[i];
            if(minn>vec[i] && i!=0){minn=vec[i];j=i;}
        }
        vector<int>v;
        v.push_back(minn);
        for(int i=0;i<n;i++){
            if(minn!=vec[i]){
                int a=vec[i];
                v.push_back(a);
            }
        }
        sort(v.begin()+1,v.end());
        for(int i=1;i<n;i++){
            if(vec[i]==v[i] && i+1<n){
                int temp=v[i];
                v[i]=v[i+1];v[i+1]=temp;
            }
        }
        if(vec[n-1]==v[n-1]){
            int tepm=v[n-1];
            v[n-1]=v[n-2];v[n-2]=tepm;
        }
        if(n==1){
            cout<<-1<<endl;
        }
        else{
            for(int i=0;i<n;i++){
                cout<<v[i]<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}