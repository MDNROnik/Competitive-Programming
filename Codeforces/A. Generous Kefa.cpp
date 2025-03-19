#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int count=0;
    vector<int>vec;
    string s;
    cin>>s;
    string s2;

    for(int i=0;i<s.size();i++){
        count=0;
        if(s[i]!='0'){
            s2[0]=s[i];s[i]='0';
            for(int j=0;j<s.size();j++){
                if(s2[0]==s[j]){
                    s[j]='0';
                    count++;
                }
                //cout<<s2[0]<<" "<<count+1<<endl;
            }
            vec.push_back(count+1);
        }
        //cout<<s<<endl;
    }
    sort(vec.begin(),vec.end());
    int n=vec[vec.size()-1];
    if(n>b){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }

    return 0;
}


 