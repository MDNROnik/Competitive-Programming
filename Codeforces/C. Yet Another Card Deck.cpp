#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int num,que,pop,n;
    cin>>num>>que;
    list<int> lis;
    list<int>:: iterator it,it2;
    for(int i=0;i<num;i++){
        cin>>n;
        lis.push_back(n);
    }
    for(int i=0;i<que;i++){
        cin>>n;
        int j=0;
        for(it=lis.begin();it!=lis.end();it++){
            if(n==*it){
                it2=find(lis.begin(),lis.end(),n);
                lis.erase(it2);
                lis.push_front(n);
                cout<<j+1<<endl;
                break;
            }
            j++;
        }
    }
    return 0;
}


 