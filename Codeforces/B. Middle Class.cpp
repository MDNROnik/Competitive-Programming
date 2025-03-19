#include <bits/stdc++.h>
using namespace std;
int main(){
    long long test;
    cin>>test;
    while(test--){
        vector<long long >vec;
        vector<long long >::iterator it;
        long long  n,x,a,total=0,count=0;
        cin>>n>>x;
        for(long long  i=0;i<n;i++){
            cin>>a;
            if(a>x){total+=(a-x);count++;}
            else{
                vec.push_back(a);
            }
        }
        sort(vec.begin(),vec.end());
        for(long long  i=vec.size()-1;i>=0;i--){
            long long  temp;
            temp=x-vec[i];
            //cout<<vec[i]<<endl;
            if(total>=temp){
                total-=temp;count++;
            }
        }
        cout<<count<<endl;
        //cout<<total<<endl;
    }
    return 0;
}