#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
        string s;cin>>s;
        map<char,ll>mp;
        int first=0,last=0,count=0;
        for(int i=0;i<s.size();i++){
            mp[s[i]]=i;
        }
        bool ans=true;
        if(mp.find('a')==mp.end()){
            cout<<"NO"<<endl;continue;
        }
        first=last=mp['a'];

        for(int i=98;i<=122;i++){
            //cout<<index<<endl;
            //cout<<char(i)<<endl;
            char key =i;

            if(mp.find(key)==mp.end()){
                //cout<<11<<endl;
                break;
            }
            else{
                //cout<<22<<endl;
            }
            ll index=mp[char(i)];
            if(first-1==index){
                if(count==0){count++;}
                first--;count++;
            }
            else if(last+1==index){
                if(count==0){count++;}
                last++;count++;
            }
            else{
                break;
            }
        }
        if(count==s.size()){
            cout<<"YES"<<endl;
        }
        else{
            if(s.size()==1 ){
                if(s[0]=='a'){
                    cout<<"YES"<<endl;
                }
                else{
                    cout<<"NO"<<endl;
                }
                continue;
            }
            cout<<"NO"<<endl;
        }

    }

}


