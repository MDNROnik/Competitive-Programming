#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s;

    char a = s[0], op = s[1], b = s[2];
    if ((a < b && op == '<') || (a == b && op == '=') || (a > b && op == '>')) {
        cout << s << endl;
    } else if (a < b) {
        cout << a << "<" << b << endl;
    } else if (a == b) {
        cout << a << "=" << b << endl;
    } else {
        cout << a << ">" << b << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
