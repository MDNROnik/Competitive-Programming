#include <bits/stdc++.h>
using namespace std;
#define ll long long
vector<int>arr;
int main(){
    int test;
    cin>>test;
    while(test--){
        int n;
        cin>>n;
        vector<int>vec(n),vec2(n),vec3;
        vector<int>::iterator it;
        for(int i=0;i<n;i++){
            cin>>vec[i];
        }
        for(int i=0;i<n;i++){
            cin>>vec2[i];
            if(vec2[i]==0){
                vec3.push_back(vec[i]);
            }
        }
        sort(vec3.rbegin(),vec3.rend());
        it=vec3.begin();
        for(int i=0;i<n;i++){
            if(vec2[i]==0){
                vec[i]=*it;it++;
            }
        }
        for(int i=0;i<n;i++){
            cout<<vec[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}