#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    while(test--){
        string s="abcdefghijklmnopqrstuvwxyz";
        string sm;
        cin>>sm;
        int total=0,a,b;
        for(int i=0;i<s.size();i++){
            if(s[i]==sm[0]){
                total=(i*25);
                a=i+1;
            }
            if(s[i]==sm[1]){
                b=i+1;
            }
        }

        if(a<b){
            total+=b;
            total--;
        }
        else{
            total+=b;
        }
        cout<<total<<endl;
    }
    return 0;
}
 