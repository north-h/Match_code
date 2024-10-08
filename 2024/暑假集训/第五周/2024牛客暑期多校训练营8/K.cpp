// #pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
#define debug1(a) cout << #a << '=' << a << endl
#define debug2(a, b) cout << #a << '=' << a << ' ' << #b << '=' << b << endl
#define int long long
const int N = 100010;
const int INF = 0x3f3f3f3f;

using namespace std;

void solve() {
    string s; cin >> s;
    for (int i = 0; i < s.size(); i ++) {
        if (s.substr(i, 5) == "avava") i += 4;
        else if (s.substr(i, 3) == "ava") i += 2;
        else {
            cout << "No\n";
            return ;
        }
    }
    cout << "Yes\n";
}

int32_t main() {
    ios::sync_with_stdio(false), cin.tie(nullptr);
    int h_h = 1;
    cin >> h_h;
    while (h_h--)solve();
    return 0;
}