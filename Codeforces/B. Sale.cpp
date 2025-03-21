#include<bits/stdc++.h>
#include <string>
#include <sstream>
using namespace std;
int main(){
    int num,n;
    cin>>num>>n;
    int arr[num],sum=0,i=0,ne=0;
    for(i=0;i<num;i++){
        cin>>arr[i];
    }
    sort(arr,arr+num);
    i=0;
    while(n--){
        if(arr[i]<0){
                //cout<<1<<endl;
            for(int j=-1;j>=arr[i];j--){
                ne+=1;
            }
            //cout<<ne<<endl;
            arr[i]=ne;ne=0;
            sum+=arr[i];
        }
        i++;
    }
    cout<<sum<<endl;

    return 0;
}

 