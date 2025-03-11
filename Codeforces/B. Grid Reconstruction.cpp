#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define fastIo() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void solve()
{
    int num;
    cin>>num;
    num=num*2;
    int i=2,j=num-2;
    vector<int>vec;
    vector<int>vec2;
    for(;i<j;i+=2,j-=2)
    {
        vec2.push_back(i);
        vec2.push_back(j);
    }
    if(i==j)
    {
        vec2.push_back(i);
    }
    vec2.push_back(num);
    i=1,j=num-1;
    for(;i<j;i+=2,j-=2)
    {
        vec.push_back(j);
        vec.push_back(i);
    }
    i=0;
    while(i<vec.size())
    {
        cout<<vec[i]<<" ";i++;
    }
    cout<<endl;i=0;
    while(i<vec2.size())
    {
        cout<<vec2[i]<<" ";i++;
    }
    cout<<endl;
}
int main()
{
    fastIo();
    ll test;
    cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}
 