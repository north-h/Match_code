/*
 * ==============================================================
 * Author:  north_h
 * Time:    2024-10-20 14:16:31
 *
 * Problem: 因子数小于等于4的个数
 * Contest: NowCoder
 * URL:     https://ac.nowcoder.com/acm/contest/93674/C
 * MemoryL: 524288 MB
 * TimeL:   2000 ms
 * ==============================================================
 */

// #pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
#define debug1(a) cerr << #a << '=' << a << endl
#define debug2(a, b) cerr << #a << '=' << a << ' ' << #b << '=' << b << endl
#define int long long
const int N = 100010, INF = 0x3f3f3f3f;

using namespace std;

void solve() {
    int a, b, c, d; cin >> a >> b >> c >> d;
    int ans = 0;
    while (true) {
        if (a && b) a--, b --, ans ++;
        else if (a && c) a --, c --, ans ++;
        else if (b && d) b --, d --, ans ++;
        else if (c && d) c --, d --, ans ++;
        else break;
    }
    if (ans & 1) cout << "kou\n";
    else cout << "yukari\n";
}

int32_t main() {
    ios::sync_with_stdio(false), cin.tie(nullptr);
    int h_h = 1;
    // cin >> h_h;
    while (h_h--)solve();
    return 0;
}