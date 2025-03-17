#include <bits/stdc++.h>
using namespace std;
#define ll long long
vector<int>arr;
int main(){
    int test;
    cin>>test;
    while(test--){
        string s,s2,s3;
        int n,count=0,c=0;
        cin>>n;
        cin>>s;
        int temp=s.size();

        if(temp%2==0){
            temp/=2;
            for(int i=temp+1;i<s.size();i++){
                if(s[i-1]==s[i]){
                    count++;c=1;
                }
                else{break;}
            }
            if(c==1){
                count+=1;
                count+=count;
            }
            else{
                count+=2;
            }
        }
        else{
            s2=s[temp/2];
            temp/=2;
            int j=temp+1;
            for(;j<s.size();j++){
                //cout<<s2[0]<<" "<<s[j]<<endl;
                if(s2[0]==s[j]){
                    count+=2;
                }
                else{
                    break;
                }
            }
            count++;
        }
        cout<<count<<endl;
    }
    return 0;
}