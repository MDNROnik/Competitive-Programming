#include<bits/stdc++.h>
using namespace std;
int main(){
    int num,n,count=0,w=0,countb=0;
    cin>>num;
    n=num-1;
    string s;
    cin>>s;
    vector<int>vec;
    for(int i=0;i<num;i++){
       if(s[i]=='B'){
          count++;
       }
       else{
            if(count==0){

            }
            else{
                vec.push_back(count);
                count=0;
            }
       }
    }
    if(s[num-1]=='B'){
        vec.push_back(count);
        count=0;
    }
    if(vec.size()==0){
        cout<<0<<endl;
    }
    else{
        cout<<vec.size()<<endl;
        for(int i=0;i<vec.size();i++){
            cout<<vec[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}



 