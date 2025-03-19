#include <bits/stdc++.h>
using namespace std;
#define intl long long
int main(){
    intl n,a;
    cin>>n;
    while(n--){
        cin>>a;
        vector<int>vec(a);
        for(int i=0;i<a;i++){
            cin>>vec[i];
        }
        int even=0,odd=0,counte=0,counto=0,co=0,ce=0;
        if(vec[0]%2==0){
            for(int i=0;i<a;i+=2){
                if(vec[i]%2==0){
                    counte++;
                }
            }
            for(int i=1;i<a;i+=2){
                if(vec[i]%2!=0){
                    counto++;
                }
            }
            for(int i=0;i<a;i++){
                if(vec[i]%2!=0){
                    co++;
                }
                else{
                    ce++;
                }
            }

            if(a%2==0 && counte==a/2 && counto==a/2){
                cout<<"YES"<<endl;
            }
            else if(a%2!=0 && counte==(a/2)+1 && counto==(a/2)){
                cout<<"YES"<<endl;
            }
            else if(ce==a || co==a){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
        else{
            //cout<<"2"<<endl;
            for(int i=0;i<a;i+=2){
                if(vec[i]%2!=0){
                    counto++;
                }
            }
            for(int i=1;i<a;i+=2){
                if(vec[i]%2==0){
                    counte++;
                }
            }
            for(int i=0;i<a;i++){
                if(vec[i]%2!=0){
                    co++;
                }
                else{
                    ce++;
                }
            }
            //cout<<counte<<" "<<counto<<endl;
            if(a%2==0 && counte==a/2 && counto==a/2){
                cout<<"YES"<<endl;
            }
            else if(a%2!=0 && counto==(a/2)+1 && counte==(a/2)){
                cout<<"YES"<<endl;
            }
            else if(ce==a || co==a){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }

    }

    return 0;
}