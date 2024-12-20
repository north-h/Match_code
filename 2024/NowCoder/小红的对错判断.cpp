/*
 * ==============================================================
 * Author:  north_h
 * Time:    2024-10-20 19:00:11
 *
 * Problem: 小红的对错判断
 * Contest: NowCoder
 * URL:     https://ac.nowcoder.com/acm/contest/92662/A
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
    string s; cin >> s;
    for (auto &i : s) i = toupper(i);
    if (s == "YES") cout << "accept\n";
    else cout << "wrong answer\n";
}

int32_t main() {
    ios::sync_with_stdio(false), cin.tie(nullptr);
    int h_h = 1;
    // cin >> h_h;
    while (h_h--)solve();
    return 0;
}