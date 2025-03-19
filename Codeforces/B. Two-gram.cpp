#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s,s2;
    cin>>s;
    int total=0;
    for(int i=0;i<s.size()-1;i++){
        int count=0;
        for(int j=0;j<s.size()-1;j++){
            //cout<<s[i]<<s[i+1]<<"  ";
            //cout<<s[j]<<s[j+1]<<endl;
            if(s[i]==s[j] && s[i+1]==s[j+1]){
                count++;
            }
        }
        //cout<<count<<" "<<total<<endl;;
        //cout<<endl;
        if(count>total){
            s2[0]=s[i];s2[1]=s[i+1];
            total=count;
        }
    }
    cout<<s2[0]<<s2[1]<<endl;
    return 0;
}
 