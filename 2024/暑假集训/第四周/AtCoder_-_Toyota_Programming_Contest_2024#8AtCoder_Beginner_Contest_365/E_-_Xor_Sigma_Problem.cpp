/*
 * ==============================================================
 * Author:  north_h
 * Time:    2024-08-03 20:00:32 ms
 *
 * Problem: E - Xor Sigma Problem
 * Contest: AtCoder - Toyota Programming Contest 2024#8（AtCoder Beginner Contest 365）
 * URL:     https://atcoder.jp/contests/abc365/tasks/abc365_e
 * MemoryL: 1024 MB
 * TimeL:   2000 ms
 * ==============================================================
 */

// #pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
#define debug1(a) cout << #a << '=' << a << endl
#define debug2(a, b) cout << #a << '=' << a << ' ' << #b << '=' << b << endl
#define int long long
const int N = 100010;
const int INF = 0x3f3f3f3f;

using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> pre(n + 1);
    int sum = 0;
    for (int i = 1, x; i <= n; i ++) {
        cin >> x;
        pre[i] = pre[i - 1] ^ x;
        sum += x;
    }
    int ans = 0;
    for (int j = 0; j < 31; j ++) {
        int c[2] = {0, 0};
        for (int i = 0; i <= n; i ++) {
            c[pre[i] >> j & 1] ++;
        }
        // debug2(c[0], c[1]);
        // debug1(j);
        ans += (1ll << j) * c[1] * c[0];
    }
    cout << ans - sum << '\n';
}

int32_t main() {
    ios::sync_with_stdio(false), cin.tie(nullptr);
    int h_h = 1;
    // cin >> h_h;
    while (h_h--)solve();
    return 0;
}