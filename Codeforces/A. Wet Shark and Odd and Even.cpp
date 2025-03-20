#include <bits/stdc++.h>
#include<algorithm>
using namespace std;
int main(){
    long long num,j=0,n=0,sum=0,sum2=0,i;
    cin>>num;
    int arr[num];
    vector<long long>vec;
    for( i=0;i<num;i++){
        cin>>arr[i];
        if(arr[i]%2==0){
            sum+=arr[i];
            j++;
        }
        else {
            //cout<<arr[i]<<endl;
            sum2+=arr[i];
            vec.push_back(arr[i]);
        }
    }
    sort(vec.begin(),vec.end());
    i=0;
    while(sum2%2!=0){
        sum2-=vec[i];
    }
    cout<<sum+sum2<<endl;
    //cout<<sum<<endl;
    //cout<<sum2<<endl;


    return 0;
}