#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;cin>>n;
    while(n--){
        ll m,sum=0;cin>>m;
        string s;
        cin>>s;
        vector<ll>vec;
        list<ll>li;
        list<ll>::iterator it;
        for(int i=0;i<m;i++){
            ll t=i+1,t2=0;
            if(s[i]=='L'){
                t2=t-1;
            }
            else{
                t2=m-t;
            }
            vec.push_back(t2);
            sum+=t2;
        }
        if(m%2==0){
            ll c=0,in=m/2;
            ll m2=m;
            while(m2!=0){
                if(m2>0){li.push_front(in);m2--;}
                if(m2>0){li.push_back(in);m2--;}
                in++;
            }
        }
        else{
            ll c=0,in=m/2;
            ll m2=m;
            m2-=1;
            li.push_front(in);in+=1;
            while(m2!=0){
                if(m2>0){li.push_front(in);m2--;}
                if(m2>0){li.push_back(in);m2--;}
                in++;
            }
        }
        priority_queue<ll>p;
        ll i=0;
        for(it=li.begin();it!=li.end();it++){
            //cout<<*it<<" "<<vec[i]<<endl;
            ll t=*it-vec[i];
            if(t>0){
                p.push(t);
            }
            i++;
        }
        ll siz=p.size();
        while(!p.empty()){
            //cout<<p.top()<<endl;
            sum+=p.top();
            p.pop();
            cout<<sum<<" ";
        }
        m-=siz;
        for(int i=0;i<m;i++){
            cout<<sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}
 