#include<bits/stdc++.h>
using namespace std;
int main(){
    string table,c1,c2,c3,c4,c5;
    cin>>table;
    cin>>c1>>c2>>c3>>c4>>c5;
    while(1){
        if(table[0]==c1[0]||table[0]==c2[0]||table[0]==c3[0]||table[0]==c4[0]||table[0]==c5[0]){
            cout<<"YES"<<endl;
            break;
       }
       else if(table[1]==c1[1]||table[1]==c2[1]||table[1]==c3[1]||table[1]==c4[1]||table[1]==c5[1]){
            cout<<"YES"<<endl;
            break;
       }
       else{
        cout<<"NO"<<endl;
        break;
       }
    }

    return 0;
}
 