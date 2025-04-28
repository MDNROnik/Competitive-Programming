#include<bits/stdc++.h>
#define ll long long
using namespace std;

void YES(int check){
    if(check){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"Yes"<<endl;
    }
}
void NO(int check){
    if(check){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;cin>>t;
    while(t--){
        ll kr, kc;
        cin>>kr>>kc;
        ll kir, kic;
        cin>>kir>>kic;
        ll qr, qc;
        cin>>qr>>qc;
        map<pair<int,int>, int>mp;
        mp[{qr, qc}]=1;
        ll count=0;
        while(1){
            vector<pair<int, int>>pos;
            pos.push_back({-kr, -kc});
            pos.push_back({-kr, kc});
            pos.push_back({kr, -kc});
            pos.push_back({kr, kc});
            if(kr!=kc){
                pos.push_back({-kc, -kr});
                pos.push_back({-kc, kr});
                pos.push_back({kc, -kr});
                pos.push_back({kc, kr});
            }
            int m=pos.size();

            for(int i=0;i<m;i++){
                int nowr, nowc;
                //cout<<pos[i].first<<" dir "<<pos[i].second<<endl;
                //cout<<kir<<" King "<<kic<<endl;
                nowr = kir + pos[i].first;
                nowc = kic + pos[i].second;
                //cout<<nowr<<" point "<<nowc<<endl<<endl;;
                for(int j=0;j<m;j++){
                    int nowQr, nowQc;
                    nowQr = nowr+pos[j].first;
                    nowQc = nowc+pos[j].second;
                    if(nowQr==qr && nowQc==qc){
                        count++;
                    }
                }
            }
            break;
        }
        cout<<count<<endl;

    }

    return 0;
}


