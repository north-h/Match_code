/*
 * ==================================================================================
 * Author:  north_h
 * Time:    2024-09-21 22:45:21
 *
 * Problem: A. Robin Helps
 * Contest: Codeforces - Codeforces Round 974 (Div. 3)
 * URL:     https://codeforces.com/contest/2014/problem/0
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
    int n, k; cin >> n >> k;
    int ans = 0, sum = 0;
    for (int i = 1; i <= n; i ++) {
        int x; cin >> x;
        if (x >= k) ans += x;
        else if (x == 0 && ans) sum ++, ans --; 
    }
    cout << sum << '\n';
}

int32_t main() {
    ios::sync_with_stdio(false), cin.tie(nullptr);
    int h_h = 1;
    cin >> h_h;
    while (h_h--)solve();
    return 0;
}