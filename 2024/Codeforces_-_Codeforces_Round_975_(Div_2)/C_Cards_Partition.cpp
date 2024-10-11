/*
 * ==============================================================
 * Author:  north_h
 * Time:    2024-10-04 15:48:23
 *
 * Problem: C. Cards Partition
 * Contest: Codeforces - Codeforces Round 975 (Div. 2)
 * URL:     https://codeforces.com/contest/2019/problem/C
 * MemoryL: 256 MB
 * TimeL:   2000 ms
 * ==============================================================
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
    vector<int> cc(n + 1);
    int sum = 0, mx = 0;
    for (int i = 1; i <= n; i ++) {
        cin >> cc[i];
        mx = max(mx, cc[i]);
        sum += cc[i];
    }
    auto check = [&](int x) -> bool {
        if (x == 1) return true;
        int cv, vc, tk = k;
        if (sum % x) {
            cv = sum / x, vc = x - sum % x;
            if (tk >= vc) cv ++, tk -= vc;
            else return false;
            cv += tk / x;
        } else {
            cv = sum / x + tk / x;
        }
        if (mx > cv) return false;
        return true;
    };
    for (int i = n; i >= 1; i --) {
        if (check(i)) {cout << i << "\n"; return ;}
    }
}

int32_t main() {
    ios::sync_with_stdio(false), cin.tie(nullptr);
    int h_h = 1;
    cin >> h_h;
    while (h_h--)solve();
    return 0;
}