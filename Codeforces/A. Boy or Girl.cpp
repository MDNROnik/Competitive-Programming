/*#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    int count=1,count2=0;
    cin>>s;
    for(int i=0;i<s.size();i++){
        count=0;
        for( int j=0;j<s.size();j++){
            if(s[i]==s[j] && i != j){
                count++;break;
            }
        }
        cout<<count<<endl;
        if(count==0){count2++;}
    }


    cout<<count2<<endl;
    return 0;
}*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    int count=1,count2=0;
    cin>>s;
    sort(s.begin(),s.end());
    for(int i=0;i<s.size();i++){
        count=0;
        for( int j=i;j<s.size();j++){
            if(s[i]==s[j] && i != j){
                count++;break;
            }
        }
        if(count==0){count2++;}
    }

    if(count2%2==0){cout<<"CHAT WITH HER!"<<endl;}
    else{cout<<"IGNORE HIM!"<<endl;}


    return 0;
}