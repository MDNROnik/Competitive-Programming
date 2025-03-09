#include<bits/stdc++.h>
#define mod 1000000007
#define lli long long int
using namespace std;
int main()
{
    string s;
        cin>>s;
        string first,second;
        first.push_back(s[0]);
        first.push_back(s[1]);
        second.push_back(s[3]);
        second.push_back(s[4]);
        lli count=0;
        reverse(second.begin(),second.end());
        //cout<<first<<" "<<second<<endl;
        if(first==second)
        {
            cout<<count<<endl;
            return 0;
        }
        reverse(second.begin(),second.end());
        while(1)
        {
            count++;
            int n=stoi(first);
            int m=stoi(second);
            //cout<<first<<" "<<second<<endl;
            m++;
            //cout<<m<<endl;
            if(m==60)
            {
                m=0;
                n++;
            }
            if(n==24)
            {
                n=0;
            }
            first.clear();
            second.clear();

            if(n<10)
            {
                first.push_back('0');
            }
            if(m<10)
            {
                second.push_back('0');
            }
            first+=to_string(n);
            second+=to_string(m);
            reverse(second.begin(),second.end());
            //cout<<first<<" second "<<second<<endl;
            if(first==second)
            {
                cout<<count<<endl;
                break;
            }
            reverse(second.begin(),second.end());
        }
    return 0;
}

				  				    	 		 		  			 			