#include <bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cin>>num;
    string s,s2,st;
    set <string> vec;
    set<string>::iterator it;
    for(int i=0;i<num;i++){
        cin>>s>>s2;
        st=s+ " " + s2;
        vec.insert(st);
    }
    cout<<vec.size()<<endl;

    return 0;
}
 