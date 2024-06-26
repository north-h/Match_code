/*
 * ==============================================================
 * Author:  north_h
 * Time:    2024-05-11 20:00:26 ms
 *
 * Problem: D - Another Sigma Problem
 * Contest: AtCoder - AtCoder Beginner Contest 353
 * URL:     https://atcoder.jp/contests/abc353/tasks/abc353_d
 * MemoryL: 1024 MB
 * TimeL:   2000 ms
 * ==============================================================
 */

// #pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
#define debug1(a) cout << #a << '=' << a << endl
#define debug2(a, b) cout << #a << '=' << a << ' ' << #b << '=' << b << endl
#define lf(x) fixed << setprecision(x)
// #define LOCAL
const int N = 100010;
const int INF = 0x3f3f3f3f;
const int mod = 998244353;


using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    vector<ll> a(n + 1), s(n + 1), p(n + 1, 1), ps(n + 1);
    for (int i = 1; i <= n; i ++) {
        cin >> a[i];
        s[i] = (s[i - 1] + a[i]) % mod;
        for (int j = 0; j < to_string(a[i]).size(); j ++)
            p[i] = (p[i] * 10 % mod);
        ps[i] = (ps[i - 1] + p[i]) % mod;
    }
    ll ans = 0;
    for (int i = 1; i < n; i ++) {
        ans += a[i] * ((ps[n] - ps[i] + mod) % mod) % mod;
        ans %= mod;
        ans += (s[n] - s[i] + mod) % mod;
        ans %= mod;
    }
    cout << ans << '\n';
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