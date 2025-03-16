#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    ios_base::sync_with_stdio(false);
    ll test;cin>>test;
    while(test--){
        ll n;cin>>n;
        if(n%2==0){
            vector<ll>vec,vec2;
            for(int i=1;i<=n/2;i++){
                vec.push_back(i);
            }
            for(int i=n/2+1;i<=n;i++){
                vec2.push_back(i);
            }
            for(int i=0;i<vec2.size();i++){
                cout<<vec2[i]<<" ";
            }
            for(int i=0;i<vec.size();i++){
                cout<<vec[i]<<" ";
            }
            cout<<endl;
        }
        else{
            vector<ll>vec,vec2;
            for(int i=1;i<=n/2+1;i++){
                vec.push_back(i);//cout<<i<<" "<<endl;
            }
            for(int i=n/2+2;i<=n;i++){
                vec2.push_back(i);
            }
            ll v=vec2.size();
            for(int i=0;i<vec.size();i++){
                vec2.push_back(vec[i]);
            }
            ll c=0;
            for(int i=0;i<vec2.size();i++){
                if(vec2[i]==i+1){
                    //cout<<"hello"<<endl;
                    c++;break;
                }
            }
            for(int i=1;i<vec2.size();i++){
                if(abs(vec2[i-1]-vec2[i]) > 1 && i!=v ){
                    c++;break;
                }
                if(v-1==0){c++;break;}
            }
            if(c==2 || c==1){
                cout<<-1<<endl;
            }
            else{
                for(int i=0;i<vec2.size();i++){
                    cout<<vec2[i]<<" ";
                }
                cout<<endl;
            }
        }
    }
}