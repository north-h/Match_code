/*
 * ==================================================================================
 * Author:  north_h
 * Time:    2024-09-20 22:35:52
 *
 * Problem: B. Battle for Survive
 * Contest: Codeforces - Codeforces Round 973 (Div. 2)
 * URL:     https://codeforces.com/contest/2013/problem/B
 * MemoryL: 256 MB
 * TimeL:   1000 ms
 * ==================================================================================
 */

// #pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
#define debug1(a) cout << #a << '=' << a << endl
#define debug2(a, b) cout << #a << '=' << a << ' ' << #b << '=' << b << endl
#define int long long
const int N = 100010, INF = 0x3f3f3f3f;

using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> a(n + 1);
    for (int i = 1; i <= n; i ++) cin >> a[i];
    int ans = 0;
    for (int i = n - 1; i >= 2; i --) {
        a[i - 1] = a[i] - a[i - 1];
    }
    cout << a[n] - a[1] << '\n';
}

int32_t main() {
    ios::sync_with_stdio(false), cin.tie(nullptr);
    int h_h = 1;
    cin >> h_h;
    while (h_h--)solve();
    return 0;
}