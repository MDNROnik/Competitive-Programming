#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll n;cin>>n;
    string s;cin>>s;
    map<char,ll>mp;
    map<char,ll>::iterator it,it2,it3,it4;
    for(int i=0;i<s.size();i++){
        mp[s[i]]++;
    }
    if(mp.size()==1){
        cout<<0<<endl;
    }
    else if(mp.size()==2){
        it=mp.begin();it2=mp.begin();it2++;
        it3=mp.begin();it3++;it3++;
        if(it->first=='D' && it2->first=='U'){
            if(it->second<=it2->second){
                cout<<it->second*2<<endl;
            }
            else{
                cout<<it2->second*2<<endl;
            }
        }
        else if(it->first=='L' && it2->first=='R'){
            if(it->second<=it2->second){
                cout<<it->second*2<<endl;
            }
            else{
                cout<<it2->second*2<<endl;
            }
        }
        else{
            cout<<0<<endl;
        }
    }
    else if(mp.size()==3){
        it=mp.begin();it2=mp.begin();it2++;
        it3=mp.begin();it3++;it3++;
        if(it->first=='L' && it2->first=='R'){
            if(it->second<=it2->second){
                cout<<it->second*2<<endl;
            }
            else{
                cout<<it2->second*2<<endl;
            }
            return 0;
        }
           // 1-3
        if(it->first=='D' && it3->first=='U'){
            if(it->second<=it3->second){
                cout<<it->second*2<<endl;
            }
            else{
                cout<<it3->second*2<<endl;
            }
            return 0;
        }
        if(it->first=='D' && it2->first=='L' && it3->first=='R'){
            if(it2->second<=it3->second){
                cout<<it2->second*2<<endl;
            }
            else{
                cout<<it3->second*2<<endl;
            }
            return 0;
        }
    }
    else if(mp.size()==4){
        it=mp.begin();
        it2=mp.begin();it2++;
        it3=mp.begin();it3++;it3++;
        it4=mp.begin();it4++;it4++;it4++;
        ll maxx=-1;
        //cout<<it->first<<" "<<it2->first<<" "<<it3->first<<" "<<it4->first<<endl;
        if(it->first=='D' && it4->first=='U'){
            if(it->second<=it4->second){
                if(maxx<(it->second * 2)){
                    maxx=it->second*2;
                }
            }
            else{
                if(maxx<(it4->second * 2)){
                    maxx=it4->second*2;
                }
            }
        }
        if(it2->first=='L' && it3->first=='R'){
            if(it2->second<=it3->second){
                maxx+=it2->second*2;
            }
            else{
                maxx+=it3->second*2;
            }
        }
        cout<<maxx<<endl;
    }
}
 