#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define fastIo() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)
long long sum_of_digits(long long input) {
    long long total = 0;
    while (input != 0) {
        total += input % 10;
        input /= 10;
    }
    return total;
}
int main()
{
    fastIo();
    ll test;cin>>test;
    while(test--){
        ll n;cin>>n;
        ll a,b;
        if(n%2!=0){
            ll t=n/2;
            ll t2=(n/2)+1;
            ll temp=sum_of_digits(t);
            ll temp2=sum_of_digits(t2);
            //cout<<temp<<" "<<temp2<<endl;
            //cout<<t<<" "<<t2<<endl;
            if(abs(temp-temp2)>1){
                ll count=0;
                while(1){
                    ll i=t%10,j=t2%10;
                    if(i==9){
                        t/=10;
                        t2/=10;
                        count++;
                    }
                    else{
                        break;
                    }
                }
                //cout<<count<<endl;
                if(t==0){
                    
                }
                else{
                    cout<<t;
                }
                ll five,four;
                ll c=count;
                if(c%2==0){
                    five=c/2;
                    four=c/2;
                }
                else{
                    five=c/2;five++;
                    four=c/2;
                }
                while(five--){
                    cout<<5;
                }
                while(four--){
                    cout<<4;
                }
                cout<<" ";
                cout<<t2;
                 c=count;
                if(c%2==0){
                    five=c/2;
                    four=c/2;
                }
                else{
                    five=c/2;
                    four=c/2;four++;
                }
                while(four--){
                    cout<<4;
                }
                while(five--){
                    cout<<5;
                }
                cout<<endl;
            }
            else{
                cout<<t<<" "<<t2<<endl;
            }
        }
        else{
            cout<<n/2<<" "<<n/2<<endl;
        }

    }
	return 0;
}