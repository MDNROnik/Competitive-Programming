#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    long long n;
    cin>>n;
    string s;
    cin>>s;
    string news;
    list<string>li;
    list<string>::iterator it;
    int siz=s.size();
    for(int i=0;i<n;i++){
        news=s[i];
        if(siz%2==0){
            li.push_front(news);
        }
        else{
            li.push_back(news);
        }
        siz--;
    }
    for(it=li.begin();it!=li.end();it++){
        cout<<*it;
    }

    return 0;
}