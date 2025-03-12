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
        ll aw=1,ab=0,bw=0,bb=0;
        ll c=0,i=2,count=0;
        ll temp=2;
        while(n!=0){
            //cout<<i<<" "<<temp<<endl;
            if(c==1){
                if(n>=i){
                    n-=i;
                    count++;
                    if(i%2==0){
                        ab+=(i/2);
                        aw+=(i/2);
                    }
                    else{
                        ab+=(i/2);
                        aw+=(i/2);aw++;
                    }
                }
                if(count==2){
                    count=0;
                    c=0;
                }
            }
            else{

                if(n>=i){
                    n-=i;
                    //a+=i;
                    count++;
                    if(i%2==0){
                        bb+=(i/2);
                        bw+=(i/2);
                    }
                    else{
                        bb+=(i/2);
                        bw+=(i/2);bb++;
                    }
                }
                if(count==2){
                    count=0;
                    c=1;
                }
            }
            temp+=i;
            if(n<i){
                break;
            }
            i++;
        }
        //cout<<n<<" "<<c<<" "<<temp<<endl;
        //cout<<aw<<" "<<ab<<" "<<bw<<" "<<bb<<endl;
        if(c==1){
            if(n%2==0){
                n/=2;
                ab+=n;
                aw+=n;
            }
            else{
                if(temp%2==0){
                    n/=2;
                    ab+=n;ab++;
                    aw+=n;
                }
                else{
                    n/=2;
                    ab+=n;
                    aw+=n;aw++;
                }
            }
        }
        else{
            if(n%2==0){
                //cout<<bw<<" "<<bb<<endl;
                n/=2;
                bb+=n;
                bw+=n;
            }
            else{
                if(temp%2==0){
                    n/=2;
                    bb+=n;bb++;
                    bw+=n;
                }
                else{
                    n/=2;
                    bb+=n;
                    bw+=n;bw++;
                }
            }
        }

        cout<<aw<<" "<<ab<<" "<<bw<<" "<<bb<<endl;
    }
	return 0;
}