#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;cin>>n;
    ll tf=0,f=0,h=0;
    vector<ll>vec;
    for(int i=0;i<n;i++){
        ll a;cin>>a;
        vec.push_back(a);
    }
    ll fuck=0;
    for(int i=0;i<n;i++){
        if(vec[i]==25) {
            tf++;
        }

        else if(vec[i]==50 && tf>0){
            tf--;
            f++;
        }
        else if(vec[i]==100 && tf>0 && f>0){
            tf--;
            f--;
            h++;
        }
        else if(vec[i]==100 && tf>2){
            tf-=3;h++;
        }
        else{
            fuck=1;break;
        }
    }

    if(fuck==1){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }


    return 0;
}