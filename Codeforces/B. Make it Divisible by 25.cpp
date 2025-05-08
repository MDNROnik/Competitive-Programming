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
        string s;
        cin>>s;
        string s2=s;
        int count=0,count2=0;
        {
            //for zero
            int i=s.size()-1;
            while(i>=0){
                if(s[i]!='0'){
                    count++;i--;
                }
                else{
                    i--;break;
                }
            }
            //cout<<i<<endl;
            while(i>=0){
                if(s[i]!='0' && s[i]!='5'){
                    count++;i--;
                    //cout<<11<<endl;

                }
                else{
                    break;
                }
            }
        }
        {
            //for five
            int i=s.size()-1;
            while(i>=0){
                if(s[i]!='5'){
                    count2++;i--;
                }
                else{
                    i--;break;
                }
            }
            //cout<<i<<endl;
            while(i>=0){
                if(s[i]!='2' && s[i]!='7'){
                    count2++;i--;
                }
                else{
                    break;
                }
            }
        }
        //cout<<count<<" "<<count2<<endl;
        cout<<min(count, count2)<<endl;
    }

    return 0;
}











