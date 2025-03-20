#include <bits/stdc++.h>
using namespace std;
int main(){
    long long num,count=1,count2=0;
    cin>>num;
    string s;
        
    s=to_string(num);
    if(s.size()==1){
        cout<<1<<endl;
    }
    else{
        int di=s.size()-1;
        //cout<<di<<endl;
        while(di!=0){
            count*=10;
            di--;
        }
        count2=count;
        while(count<=num){
            count+=count2;
            
        }
        cout<<count-num<<endl;
    }
    
    return 0;
}