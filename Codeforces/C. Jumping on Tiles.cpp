#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll test;cin>>test;
    while(test--){
        string s;
        cin>>s;
        map<ll,vector<ll>>mp;
        map<ll,vector<ll>>::iterator it;
        map<ll,vector<ll>>::reverse_iterator it3;

        map<ll,ll>mp2;
        map<ll,ll>::iterator it2;
        map<ll,ll>::reverse_iterator it4;
        for(int i=0;i<s.size();i++){
            ll n=s[i]-'`';
            mp[n].push_back(i+1);
            mp2[n]++;
        }
        ll st=s[0]-'`';
        ll en=s[s.size()-1]-'`';
        ll c=0;
        if(en<st){
            it4=mp2.rbegin();
            ll jump=0,amount=0;
            vector<ll>vec;
            for(it3=mp.rbegin();it3!=mp.rend();it3++,it4++){
                //cout<<en<<" "<<it3->first<<" "<<st<<endl;
                if((it3->first <= st) && (it3->first >= en)){
                    jump+=it4->second;
                    ll t=it3->first;
                    st-=t;
                    amount+=st;
                    st=it3->first;
                    vector<ll>v;
                    v=it3->second;
                    for(int i=0;i<v.size();i++){
                        vec.push_back(v[i]);
                    }
                }
            }
            cout<<amount<<" "<<vec.size()<<endl;
            for(int i=0;i<vec.size();i++){
                cout<<vec[i]<<" ";
            }
            cout<<endl;
        }
        else{
            it2=mp2.begin();
            ll jump=0,amount=0;
            vector<ll>vec;
            for(it=mp.begin();it!=mp.end();it++,it2++){
                if((it->first <= en) && (it->first>=st) ){
                    //cout<<st<<"  "<<it->first<<endl;
                    jump+=it2->second;
                    ll t=it->first;
                    t-=st;
                    amount+=t;
                    st=it->first;
                    vector<ll>v;
                    v=it->second;
                    for(int i=0;i<v.size();i++){
                        vec.push_back(v[i]);
                    }
                }
            }
            cout<<amount<<" "<<vec.size()<<endl;
            for(int i=0;i<vec.size();i++){
                cout<<vec[i]<<" ";
            }
            cout<<endl;
        }

    }
    return 0;
}
 