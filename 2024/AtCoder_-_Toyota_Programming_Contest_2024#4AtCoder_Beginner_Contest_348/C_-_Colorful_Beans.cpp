/*
 * =========================================================
 * Author:  north_h
 * Time:    2024-04-06 20:36:27 ms
 *
 * Problem: C - Colorful Beans
 * Contest: AtCoder - Toyota Programming Contest 2024#4（AtCoder Beginner Contest 348）
 * URL:     https://atcoder.jp/contests/abc348/tasks/abc348_c
 * MemoryL: 1024 MB
 * TimeL:   2000 ms
 * =========================================================
 */

// #pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
#define debug1(a) cout << #a << '=' << a << endl
#define debug2(a, b) cout << #a << '=' << a << ' ' << #b << '=' << b << endl
#define lf(x) fixed << setprecision(x)
// #define LOCAL
const int N = 100010;
const int INF = 0x3f3f3f3f;

using namespace std;
using ll = long long;
using i2 = array<int, 2>;

void solve() {
    int n;
    cin >> n;
    unordered_map<int, int> mp;
    for (int i = 1, x, y; i <= n; i ++) {
        cin >> x >> y;
        if (!mp.count(y)) mp[y] = x;
        else mp[y] = min(mp[y], x);
    }
    int ans = 0;
    for (auto [x, y] : mp) ans = max(ans, y);
    cout << ans << endl;
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