#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios_base::sync_with_stdio(false);
    ll test;cin>>test;
    while(test--){
        ll n;cin>>n;
        vector<ll>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        ll count=0;
        vector<ll>zero(n+1,0);
        for(int i=0;i<n;i++){
            if(v[i]==0){
                count++;
            }
        }
        for(int i=0;i<n;i++){
            if(v[i]==0 && count!=0){
                zero[i]=count;count--;
            }
        }
        ll one=0,c=0;
        for(int i=0;i<n;i++){
            if(v[i]==1){one++;}
            else if(v[i]==0){
                if(v[i-1]==1 && i!=0){
                    //cout<<one<<" "<<zero[i]<<endl;
                    c+=(one*zero[i]);one=0;
                }
            }
        }
        ll index=0,h=0;
        for(int i=0;i<n;i++){
            if(v[i]==0){
                h++;
                v[i]=1;index=i;break;
            }
        }


        //2nd
        vector<ll>zero2(n+1,0);count=0;
        for(int i=0;i<n;i++){
            if(v[i]==0){
                count++;
            }
        }
        for(int i=0;i<n;i++){
            if(v[i]==0 && count!=0){
                zero2[i]=count;count--;
            }
        }
        one=0;ll c2=0;
        for(int i=0;i<n;i++){
            if(v[i]==1){one++;}
            else if(v[i]==0){
                if(v[i-1]==1 && i!=0){
                    c2+=(one*zero2[i]);one=0;
                }
            }
        }
        if(h!=0){
            v[index]=0;
        }
        for(int i=n-1;i>=0;i--){
            if(v[i]==1){
                //cout<<122<<endl;
                v[i]=0;break;
            }
        }
        //3rd
        vector<ll>zero3(n+1,0);count=0;
        for(int i=0;i<n;i++){
            if(v[i]==0){
                count++;
            }
        }
        for(int i=0;i<n;i++){
            if(v[i]==0 && count!=0){
                zero3[i]=count;count--;
            }
        }
        one=0;ll c3=0;
        for(int i=0;i<n;i++){
            if(v[i]==1){one++;}
            else if(v[i]==0){
                //cout<<one<<" "<<zero3[i]<<endl;
                if(v[i-1]==1 && i!=0){
                    c3+=(one*zero3[i]);one=0;
                }
            }
        }
        vector<ll>maxx;
        maxx.push_back(c);maxx.push_back(c2);maxx.push_back(c3);
        sort(maxx.begin(),maxx.end());
        cout<<maxx[2]<<endl;
    }
    return 0;
}