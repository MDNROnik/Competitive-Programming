#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,maxx=0,count=0;
    cin>>n>>k;
    vector<int>vec(n);
    vector<int>v2;
    for(int i=0;i<n;i++){
        cin>>vec[i];
    }
    //cout<<vec[0]<<endl;
    for(int i=1;i<n;i++){
        if(vec[i-1]==vec[i]){
            //cout<<" equal "<<endl;
            if(maxx<=count){maxx=count;}
            count=0;
        }
        else if(vec[i-1]!=vec[i]){
            //cout<<" not equal "<<endl;
            count++;
        }
        //cout<<vec[i]<<" "<<maxx<<" "<<count<<endl;
    }
    if(maxx<count){cout<<count+1<<endl;}
    else{
        cout<<maxx+1<<endl;
    }

    return 0;
}