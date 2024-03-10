/*
 * ==================================================================================
 * Author:  north_h
 * Time:    2023-09-09 16:34:10
 *
 * Problem: I. Doors Breaking and Repairing
 * Contest: Codeforces - SMU Autumn 2023 Round 1(Div.2)
 * URL:     https://codeforces.com/group/L9GOcnr1dm/contest/470092/problem/I
 * MemoryL: 256 MB
 * TimeL:   1000 ms
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

void solve() {
    int  n, x, y;
    cin >> n >> x >> y;
    int ans = 0;
    for(int i = 0, x0; i < n; i++) {
        cin >> x0;
        if(x0 <= x)ans++;
    }
    if(x > y)cout << n << endl;
    else cout << (ans + 1) / 2 << endl;
}

int32_t main() {
    IOS;
    int h_h = 1;
    // cin >> h_h;
    while (h_h--)solve();
    return 0;
}