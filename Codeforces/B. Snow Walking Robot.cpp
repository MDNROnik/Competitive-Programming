#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll test;cin>>test;
    while(test--){
        string s;cin>>s;

        map<char,ll>mp;
        map<char,ll>::iterator it,it2;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }
        if(mp.size()==1){
            cout<<0<<endl;
        }
        else if(mp.size()==2){
            it=mp.begin();
            it2=mp.begin();it2++;
            if( (it->first=='D' && it2->first=='U') || (it->first=='L' && it2->first=='R')){
                cout<<2<<endl;
                it=mp.begin();
                cout<<it->first;
                it++;
                cout<<it->first<<endl;
            }
            else{
                cout<<0<<endl;
            }
        }
        else if(mp.size()==3){
            it=mp.find('U');
            if(it!=mp.end()){
                it2=mp.find('D');
                if(it2!=mp.end()){
                    cout<<2<<endl;
                    cout<<it->first<<it2->first<<endl;continue;
                }
            }
            it=mp.find('L');
            if(it!=mp.end()){
                it2=mp.find('R');
                if(it2!=mp.end()){
                    cout<<2<<endl;
                    cout<<it->first<<it2->first<<endl;continue;
                }
            }
        }
        else if(mp.size()==4){
            ll down=mp['D'];
            ll up=mp['U'];
            ll left=mp['L'];
            ll right=mp['R'];
            left=min(left,right);
            down=min(down,up);
            cout<<(left*2)+(down*2)<<endl;
            for(int i=0;i<left;i++){
                cout<<'R';
            }
            for(int i=0;i<down;i++){
                cout<<'D';
            }
            for(int i=0;i<left;i++){
                cout<<'L';
            }
            for(int i=0;i<down;i++){
                cout<<'U';
            }
            cout<<endl;
        }

    }
    return 0;
}