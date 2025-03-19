#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a,b,c;
    cin>>a>>b>>c;
    n-=1;
    int ra=1,ow=0,ee=0;
    int total=0;
    while(n--){
        if(ra==1){
            if(a<=b){
                ow=1;ra=0;
                total+=a;
            }
            else if(b<a){
                ee=1;ra=0;
                total+=b;
            }
        }
        else if(ow==1){
            if(a<=c){
                ra=1;ow=0;
                total+=a;
            }
            else if(c<a){
                ee=1;ow=0;
                total+=c;
            }
        }
        else if(ee==1){
            if(b<=c){
                ra=1;ee=0;
                total+=b;
            }
            else if(c<b){
                ow=1;
                total+=c;
            }
        }
    }
    cout<<total<<endl;
  return 0;
}