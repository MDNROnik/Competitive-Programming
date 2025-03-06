#include <bits/stdc++.h>
using namespace std;


int main() {
    int test;
    cin>>test;
    while(test--){
        int n;cin>>n;
        vector<int>v;
        for(int i=0;i<n;i++){
            int a;cin>>a;
            v.push_back(a);
        }
        int left=0,right=n-1;
        
        vector<int>ans;
        
        while(left<=right){
            
            ans.push_back(v[left]);
            left+=1;
            
            if(left<right){
                ans.push_back(v[right]);
                right-=1;
            }
        }
        
        for(int i=0;i<n;i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}