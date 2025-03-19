#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s[n];
    for(int i=0;i<n;i++){
        cin>>s[i];
        //cout<<s[i].size()<<endl;
    }
    int fina=0;
    for(int j=0;j<s[0].size();j++){
        int count=0;

        for(int i=1;i<n;i++){
            //cout<<s[0][j]<<" "<<s[i][j]<<endl;
            if(s[0][j] == s[i][j]){
                count++;
            }
        }
        if(count==(n-1)){
            fina++;
        }
        else{
            break;
        }
    }
    cout<<fina<<endl;

    return 0;
}
 