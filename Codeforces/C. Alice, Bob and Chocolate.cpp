#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define fastIo() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)

int main()
{
    fastIo();
    ll n;cin>>n;
    vector<ll>vec;
    for(int i=0;i<n;i++){
        ll a;cin>>a;
        vec.push_back(a);
    }
    ll i=0,j=n-1;
    ll a=0,b=0;
    while(i!=j){
        //cout<<vec[i]<<" Value "<<vec[j]<<endl;
        //cout<<i+1<<" Index "<<j+1<<endl<<endl;;
        if(abs(i-j)==1){
            a++,b++;
            break;
        }
        if(vec[i]==vec[j]){
            a++;b++;
            i++;j--;
        }
        else if(vec[i]>vec[j]){
            b++;
            vec[i]-=vec[j];j--;
        }
        else if(vec[i]<vec[j]){
            a++;
            vec[j]-=vec[i];i++;
        }
    }
    if(i==j){
        a++;
    }
    cout<<a<<" "<<b<<endl;

    return 0;
}