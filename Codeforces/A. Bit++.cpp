#include<bits/stdc++.h>
using namespace std;
int main(){
    int num,sc=0;
    string s;
    cin>>num;
    for(int i=0;i<num;i++){
        cin>>s;
        if(s[0]=='-'){
            --sc;
        }
        else if(s[2]=='-'){
            sc--;
        }
        else if(s[0]=='+'){
            ++sc;
        }
        else if(s[2]=='+'){
            sc++;
        }
    }
    cout<<sc<<endl;
    return 0;
}


 