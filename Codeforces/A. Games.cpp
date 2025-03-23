#include <bits/stdc++.h>
using namespace std;
int main(){
    int num,count=0;
    cin>>num;
    int ar1[num],ar2[num];
    for(int i=0;i<num;i++){
        cin>>ar1[i]>>ar2[i];
    }
    for(int i=0;i<num;i++){
        for(int j=0;j<num;j++){
            if(ar1[i]==ar2[j]){count++;}
        }
    }
    cout<<count<<endl;

    return 0;
}
 