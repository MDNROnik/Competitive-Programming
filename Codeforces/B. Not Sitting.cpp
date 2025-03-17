#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll test;
    cin>>test;
    while(test--)
    {
        int n,m;
        cin>>n>>m;
        vector<int>vec;
        vector<int>::iterator it;
        int temp=0,tempp,r;

        for(int i=1;i<=n;i++){
            temp=0;
            temp=n-i;
            tempp=i-1;
            if(temp>=tempp){temp;}
            else{temp=tempp;}
            for(int j=1;j<=m;j++){
                int t1,t2,t3;
                t1=temp;
                t2=m-j;t3=j-1;
                //cout<<t2<<" "<<t3<<endl;
                if(t2>=t3){
                    t1+=t2;
                }
                else{
                    t1+=t3;
                }
                vec.push_back(t1);
            }
        }
        sort(vec.begin(),vec.end());
        for(int i=0;i<vec.size();i++){
            cout<<vec[i]<<" ";
        }cout<<endl;
    }
}
 