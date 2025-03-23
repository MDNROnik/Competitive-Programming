#include <bits/stdc++.h>
#include<string>
using namespace std;
int main(){
    int num,count=0;
    cin>>num;
    string s;
    string s1,s2,s3,s4,s5;
    s1="Tetrahedron";
    s2="Cube";
    s3="Octahedron";
    s4="Dodecahedron";
    s5="Icosahedron";
    while(num--){
        cin>>s;
        if(s[0]=='T'){
            count+=4;
        }
        else if(s[0]=='C'){
            count+=6;
        }
        else if(s[0]=='O'){
            count+=8;
        }
        else if(s[0]=='D'){
            count+=12;
        }
        else if(s[0]=='I'){
            count+=20;
        }

    }
    cout<<count<<endl;
    return 0;
}
 