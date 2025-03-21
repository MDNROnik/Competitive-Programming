#include <bits/stdc++.h>
#include <iostream>
#include <cstring>
using namespace std;
int main(){
    int num;
    cin>>num;
    int arr[num],count=0;
    for(int i=0;i<num;i++){
        cin>>arr[i];
    }
    list <int> li;
    list <int>::iterator it;
    for(int i=num-1;i>=0;i--){
        for(int j=i+1;j<=num;j++){
            if(arr[i]==arr[j]){
                count++;break;
            }
        }
        if(count==0){
            li.push_front(arr[i]);
        }
        count=0;
    }
    cout<<li.size()<<endl;

    for(it=li.begin();it!=li.end();it++){
        cout<<*it<<" ";
    }
    return 0;

}