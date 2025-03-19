#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    while(test--){
        int n,d,temp=0;
        cin>>n>>d;
        int temp2=d;
        if(n>=d){cout<<"YES"<<endl;}
        else{
            for(int i=1;;i++){
                temp=0;
                if(d%(i+1)==0){
                    temp=d/(i+1);
                }
                else{
                    temp=d/(i+1)+1;
                }
                temp+=i;

                if(temp<=n){cout<<"YES"<<endl;break;}
                if(temp2>=temp){

                }
                else if(temp2<temp){
                    cout<<"NO"<<endl;break;
                }
                temp2=temp;
            }
        }

    }
    return 0;
}