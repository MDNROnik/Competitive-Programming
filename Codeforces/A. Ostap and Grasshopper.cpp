#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,j;
    cin>>n>>j;
    string s;
    cin>>s;
    int g,t;
    vector<int>vec;
    vector<int>:: iterator it;
    for(int i=0;i<n;i++){
        if(s[i]=='T'){
            t=i+1;
        }
        if(s[i]=='G'){
            g=i+1;
        }
        if(s[i]=='#'){
            vec.push_back(i+1);
        }
    }
    int no=0,i=0;

    //cout<<g<<" "<<t<<endl;
    if(g<t){
        for(int i=g;i<t;i+=j){
            for(it=vec.begin();it!=vec.end();it++){
                if(*it == i){
                    no=1;break;
                }
            }
            if((i+j)>t){
                no=1;break;
            }
        }
        if(no==1){
            cout<<"NO"<<endl;
        }
            else{
                cout<<"YES"<<endl;
            }
    }
    else{
        for(int i=g;i>t;i-=j){
            //cout<<i<<endl;
            for(it=vec.begin();it!=vec.end();it++){
                if(*it == i){
                    no=1;break;
                }
            }
            if((i-j)<t){
                no=1;break;
            }
        }
        if(no==1){
                cout<<"NO"<<endl;
            }
            else{
                cout<<"YES"<<endl;
            }
    }

    return 0;
}
 