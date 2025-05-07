#include<bits/stdc++.h>
#define ll long long
#define nline '\n'

using namespace std;

void Yes(int check){
    if(check){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"Yes"<<endl;
    }
}


void No(int check){
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
        ll a, b, c;cin>>a>>b>>c;
        if ((b - a) == (c - b))
            cout << "YES" << endl;

        else if ((2 * b - c) % a == 0 && (2 * b - c) > 0)
            cout << "YES" << endl;

        else if ((a + c) % (2 * b) == 0)
            cout << "YES" << endl;

        else if ((2 * b - a) % c == 0 && (2 * b - a) > 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}










 