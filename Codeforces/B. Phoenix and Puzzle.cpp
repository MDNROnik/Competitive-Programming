#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll test;
    cin>>test;
    while(test--){
        ll n;
        cin>>n;
        if(n%2 != 0){
            cout<<"NO";
        }
        else{
            double temp=sqrt(n);
            if ( floor(temp) == ceil(temp) ){
                cout << "YES";
            }
            else{
                n/=2;temp=sqrt(n);
                if ( floor(temp) == ceil(temp) ){
                    cout << "YES";
                }
                else{
                    cout << "NO";
                }
            }
        }
        cout<<endl;
    }

    return 0;
}