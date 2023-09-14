/*
 * ==================================================================================
 * Author:  north_h
 * Time:    2023-09-14 15:05:23
 *
 * Problem: C. Not Adjacent Matrix
 * Contest: Codeforces - Codeforces Round 719 (Div. 3)
 * URL:     https://codeforces.com/contest/1520/problem/C
 * MemoryL: 256 MB
 * TimeL:   4000 ms
 * ==================================================================================
 */

#pragma GCC optimize("Ofast")

#include<bits/stdc++.h>

#define IOS ios::sync_with_stdio(false),cin.tie(nullptr), cout.tie(nullptr);
#define met_0(a) memset(a,0,sizeof a)
#define met_1(a) memset(a,-1,sizeof a)
#define met_x(a) memset(a,0x3f,sizeof a)
#define mpy(a, b) memcopy(a,sizeof b,b)
#define ll long long
#define ld long double
#define ull unsigned long long
#define fi first
#define se second
#define PII pair<int,int>
#define PDD pair<double,double>
#define PCI pair<char,int>
#define PSI pair<string,int>
#define ALL(a) a.begin(),a.end()
#define rALL(a) a.rbegin(),a.rend()
#define int128 __int128
#define endl '\n'
const int N = 10010;
const int M = 1910;
const int MOD = 98244353;
const double EPS = 1e-8;
const int INF = 0x3f3f3f3f;

using namespace std;

int g[110][110];
int s = 1;
int n;

void add(int x, int y) {
    for(int i = x, j = y; i <= n && j <= n; i++, j ++) {
        g[i][j] = s;
        s++;
    }
}

void solve() {
    s = 1;
    cin >> n;
    if(n == 2)cout << -1 << endl;
    else {
        int x = 1, y = 1;
        add(x, y);
        for(int i = 1; i < n; i++) {
            add(x + i, y);
            add(x, y + i);
        }
        for(int i = 1; i <= n; i++) {
            for(int j = 1; j <= n; j++) {
                cout << g[i][j] << ' ';
            }
            cout << endl;
        }
    }
}

int32_t main() {
    IOS;
    int h_h = 1;
    cin >> h_h;
    while (h_h--)solve();
    return 0;
}