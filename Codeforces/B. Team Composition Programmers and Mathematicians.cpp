#include<bits/stdc++.h>
using namespace std;
int main(){
    long long test;
    long long n1,n2,count,num=0,num2=0,num3=0,t=0,num4,num5;
    cin>>test;
    while(test--){
        cin>>n1>>n2;
        count=0;
        if(n1>n2){
            swap(n1,n2);
        }
        num4=n1*2;
        num5=n1*3;
        if(n1==n2){
            cout<<(n1+n2)/4<<endl;
        }
        else{
            if(n2>=num5){
                cout<<n1<<endl;
            }
            else if(n2<num4){
                t=n1+n2;
                cout<<t/4<<endl;
            }
            else{
                //cout<<n1<<" "<<n2<<endl;
                num=n2/3;
                num2=n2%3;
                num3=n1-num;
                //cout<<num<<" "<<num2<<" "<<num3<<endl;
                t=num3+num2;
                t/=4;
                cout<<t+num<<endl;

            }
        }
    }


   return 0;
}

/*









29 11
33 29
19 11
13 17
31 14
3 38
34 5
16 13
34 34
32 14
32 19
39 29
3 16
32 12
6 5
37 16
30 6
28 13
7 0
18 6
5 20
37 20
6 18
16 34
8 38
14 3
24 12
11 35
36 1
34 31
9 39
14 5
5 11
8 8
37 26
28 36
29 7
3 1
21 12
25 20
29 22
40 11
1 7
22 26
0 26
8 24
28 27
5 1
33 40
28 14
5 2
3 11
16 22
14 33
35 39
16 14
6 14
35 18
26 24
0 16
37 13
20 38
26 18
2 38
13 11
31 35
38 10
18 20
38 38
13 34
17 34
31 24
6 9
16 19
14 15
30 36
7 26
*/