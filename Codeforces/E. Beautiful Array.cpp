#include <bits/stdc++.h>
using namespace std;

vector<int> gArr(int a, int b) {
    vector<int> v(7, b);
    int mid = v.size() / 2;
    v[mid] = b;
    int sumT = a * v.size();
    int sumC = accumulate(v.begin(), v.end(), 0);
    int diff = sumT - sumC;
    v[mid] += diff;
    return v;
}

int main() {
    int a, b;
    cin >> a >> b;
    vector<int> r = gArr(a, b);
    cout << r.size() << "\n";
    for (int i = 0; i < r.size(); ++i) {
        cout << r[i] << " ";
    }
    cout << "\n";
    return 0;
}