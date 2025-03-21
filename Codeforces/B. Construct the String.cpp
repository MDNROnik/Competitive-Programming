#include<bits/stdc++.h>
#include <string>
#include <sstream>
using namespace std;
int main(){
    int test;
    cin>>test;
    int n,a,b;
    vector<char>vec;
    string s2[2000];
    string s="abcdefghijklmnopqrstuvwxyz";
    while(test--){
        cin>>n>>a>>b;
        int i=0,j=0;

        while(n--){
            if(j<b){
                vec.push_back(s[j]);j++;
            }
            else if(j==b){
                j=0;
                vec.push_back(s[j]);j++;
            }
        }

        for(int k=0;k<vec.size();k++){
            cout<<vec[k];
        }
        cout<<endl;

        vec.erase(vec.begin(),vec.end());
    }
    return 0;
}
 