#include<bits/stdc++.h>
#include <string>
#include <sstream>
using namespace std;
int main(){
    long long n;
    vector<int>vec;
    int num=0,total=0,time=0,i,j;
    cin>>n;
    long long cus[n],item[n];
    for(i=0;i<n;i++){
        cin>>cus[i];
    }
    for(i=0;i<n;i++){
        for( j=0;j<cus[i];j++){
            cin>>num;
            total+=num;
        }
        time=(total*5)+(j*15);
        vec.push_back(time);
        total=0;
    }
    sort(vec.begin(),vec.end());
    cout<<vec[0]<<endl;


    return 0;
}


 