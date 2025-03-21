#include <bits/stdc++.h>
using namespace std;
int main(){
    int k,num,total=0;
    cin>>k;
    int arr[12];
    vector<int>vec;
    for(int i=0;i<12;i++){
        cin>>num;vec.push_back(num);
    }
    sort(vec.begin(),vec.end());
    for(int i=11;i>=0;i--){
        if(k==0){break;}
        k-=vec[i];total++;
        if(k<=0){break;}
    }

    if(total==12 && k ==0){
        cout<<total<<endl;
    }
    else if (total==12 && k>0){
        cout<<-1<<endl;
    }
    else{
        cout<<total<<endl;
    }

    return 0;
}


 