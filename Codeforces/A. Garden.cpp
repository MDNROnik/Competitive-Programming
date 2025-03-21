#include<bits/stdc++.h>
#include <string>
#include <sstream>
using namespace std;
int main(){
    int n,num,k,n3;
    cin>>num>>k;
    int n2=num;
    vector<int>vec;
    while(num--){
        cin>>n;
        if(k%n==0){
            //cout<<n<<endl;
            n3=k/n;
            vec.push_back(n3);
        }
    }
    sort(vec.begin(),vec.end());
    cout<<vec[0]<<endl;
    return 0;
}
 