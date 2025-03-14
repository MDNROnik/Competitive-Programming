#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
string n,m;cin>>n>>m;
ll i,j;
for(i=0;i<n.size();i++){
    if(n[i]!='0'){break;}
}
for(j=0;j<m.size();j++){
    if(m[j]!='0'){break;}
}
if(n.size()-i > m.size()-j){
    cout<<">"<<endl;
}
else if(n.size()-i < m.size()-j){
    cout<<"<"<<endl;
}
else{
    for(;i<n.size();i++,j++){
        ll temp=n[i]-'0';
        ll temp2=m[j]-'0';
        if(temp>temp2){
            cout<<">"<<endl;return 0;
        }
        else if(temp<temp2){
            cout<<"<"<<endl;return 0;
        }
    }
    cout<<"="<<endl;
}
    return 0;
}