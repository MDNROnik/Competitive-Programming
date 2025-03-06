#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve() {
    int n;
    cin >> n;
    vector<string> vl;
    long long waiting = 0;

    for (int i = 0; i < n; i++) {
        char type;
        long long x;
        cin >> type >> x;

        if (type == 'P') {
            waiting += x;
        } else if (type == 'B') {
            if (x > waiting) {
                vl.push_back("YES");
            } else {
                vl.push_back("NO");
            }
            waiting = max(0LL, waiting - x);
        }
    }

    for (const auto& res : vl) {
        cout << res << endl;
    }
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}
