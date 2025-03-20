#include <bits/stdc++.h>
using namespace std;
int main(){
    int test,total=0,i;
    cin>>test;
    vector<int>vec(7);
    while(test--){
        for(i=0;i<7;i++){
            cin>>vec[i];
        }
        total=vec[0]+vec[1];
        i=2;
        while(1){
            if(total+vec[i]==vec[7-1]){
                break;
            }
            else{
                i++;
            }
        }
        cout<<vec[0]<<" "<<vec[1]<<" "<<vec[i]<<endl;
        vec.erase(vec.begin(),vec.end());
    }
    return 0;
}
 