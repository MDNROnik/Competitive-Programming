#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define fastIo() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)

int main()
{
    fastIo();
    ll test;cin>>test;
    while(test--){
        ll n;cin>>n;
        n--;
        ll a=1,b=0;
        ll c=0,i=2,count=0;
        while(n!=0){
            //cout<<a<<" "<<b<<endl;
            if(c==1){
                //cout<<" 1 "<<i<<" "<<n<<endl;
                if(n>=i){
                    n-=i;
                    a+=i;
                    count++;
                }
                if(count==2){
                    count=0;
                    c=0;
                }
                //cout<<"HELLO"<<n<<endl;
                i++;
            }
            else{
                //cout<<" 0 "<<i<<" "<<n<<endl;
                if(n>=i){
                    n-=i;
                    b+=i;
                    count++;
                }
                if(count==2){
                    count=0;
                    c=1;
                }
                i++;
            }
            if(n<i){
                break;
            }
        }
        //cout<<c<<endl;
        if(c==1){
            a+=n;
        }
        else{
            b+=n;
        }
        cout<<a<<" "<<b<<endl;
    }
	return 0;
}
