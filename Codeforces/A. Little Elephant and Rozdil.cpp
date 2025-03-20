#include <bits/stdc++.h>
using namespace std;
int main(){
    long long city,mi=0,j=0,count=0,sw=0,ci=0,mini=0;
    cin>>city;
    vector<int>vec(city);
    for(int i=0;i<city;i++){
        cin>>vec[i];
    }
    mi=*min_element(vec.begin(), vec.end());

    for(int i=0;i<city;i++){
        if(mi==vec[i]){
            count++;
            ci++;
            if(ci==1){mini=count;}
        }
        else{
            count++;
        }
        if(ci==2){
            sw=1;break;
        }
    }

    if(sw==0){
        cout<<mini<<endl;
    }
    else{
        cout<<"Still Rozdil"<<endl;
    }

    return 0;
}
 