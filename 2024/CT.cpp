// #pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
#define fi first;
#define se second;
#define debug1(a) cout << #a << '=' << a << endl
#define debug2(a, b) cout << #a << '=' << a << ' ' << #b << '=' << b << endl
#define lf(x) fixed << setprecision(x)
#define LOCAL
const int N = 100010;
const int INF = 0x3f3f3f3f;

using namespace std;
using ll = long long;
using PII =  pair<int, int>;

void solve() {
    string s;
    while (getline(cin, s)) {
        // cout << s << endl;
        cout << "\"" <<  s << "\"," <<  endl;
    }
}

int32_t main() {
#ifdef LOCAL
    freopen("data.in", "r", stdin);
    freopen("data.out", "w", stdout);
#endif
    ios::sync_with_stdio(false), cin.tie(nullptr);
    int h_h = 1;
    // cin >> h_h;
    while (h_h--)solve();
    return 0;
}
