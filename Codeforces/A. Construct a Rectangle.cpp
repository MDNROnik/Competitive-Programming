#include <bits/stdc++.h>
using namespace std;
int main(){
    long long test,div=0,div2=0,i=0;
    vector<int>vec(3);
    cin>>test;
    while(test--){
        for(i=0;i<3;i++){
            cin>>vec[i];
        }
        if(vec[0]==0 || vec[1]==0 || vec[2]==0){
            div2=0;
        }
        else if(vec[0]==vec[1]){
            if(vec[2]%2==0){
                div2=1;
            }
        }
        else if(vec[1]==vec[2]){
            if(vec[0]%2==0){
                div2=1;
            }
        }
        else if(vec[0]==vec[2]){
            if(vec[1]%2==0){
                div2=1;
            }
        }
        else{
            //for 1
            if(vec[0]<vec[1]){
                div=vec[1]-vec[0];
            }
            else{
                div=vec[0]-vec[1];
            }
            if(div==vec[2]){
                div2=1;
            }

            //for 2
            if(vec[1]<vec[0]){
                div=vec[0]-vec[1];
            }
            else{
                div=vec[1]-vec[0];
            }
            if(div==vec[2]){
                div2=1;
            }

            //for 3
            if(vec[2]<vec[1]){
                div=vec[1]-vec[2];
            }
            else{
                div=vec[2]-vec[1];
            }
            if(div==vec[0]){
                div2=1;
            }
        }
        if(div2==1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

        div=0;div2=0;
        vec.erase(vec.begin(),vec.end());
    }

    return 0;
}
 