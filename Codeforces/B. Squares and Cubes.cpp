#include<bits/stdc++.h>
using namespace std;
int main(){
    long long test;
    cin>>test;
    while(test--){
        long long num;
        set<long long>se;
        set<int>:: iterator it;
        cin>>num;
        for(long long i=2;i<=sqrt(num);i++){
            se.insert(i*i);
            if(i*i*i<=num){
                se.insert(i*i*i);
            }
        }
        cout<<se.size()+1<<endl;
        se.erase(se.begin(),se.end());
    }
    return 0;
}


 