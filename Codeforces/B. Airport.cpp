#include<bits/stdc++.h>
using namespace std;
bool myfunc(int a,int b){
    return (a>b);
}
int main(){
    int n,m,j=1;
    cin>>n>>m;
    vector<int>arr(m),arr2(m);
    int i=0;
    while(i<m){
        cin>>arr[i];
        arr2[i]=arr[i];
        i++;
    }
    int maxx=0,minn=0;
    i=0;
    sort(arr.begin(),arr.end(),myfunc);
    while(j<=n){
        maxx+=arr[i];
        arr[i]--;
        if(arr[i]>=arr[i+1]){}
        else{
            sort(arr.begin(),arr.end(),myfunc);
        }
        j++;
        if(i==m){
            i=0;
        }
    }
    j=1;
    sort(arr2.begin(),arr2.end());
    i=0;
    while(j<=n){
        if(arr2[i]==0){
            i++;
        }
        minn+=arr2[i];
        arr2[i]--;
        j++;
    }

    cout<<maxx<<" "<<minn<<endl;

    return 0;
}