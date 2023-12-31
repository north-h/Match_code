/*
 * ==================================================================================
 * Author:  north_h
 * Time:    2023-11-24 23:30:50
 *
 * Problem: D. Yet Another Monster Fight
 * Contest: Codeforces - Educational Codeforces Round 158 (Rated for Div. 2)
 * URL:     https://codeforces.com/contest/1901/problem/D
 * MemoryL: 256 MB
 * TimeL:   2000 ms
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
#define lcm(x,y) x*y/__gcd(x,y)
#define debug1(a) cout<<#a<<'='<<a<<endl
#define debug2(a,b) cout<<#a<<'='<<a<<' '<<#b<<'='<<b<<endl
#define lf(x)   fixed << setprecision(x)
#define PI acos(-1)
const int N = 10010;
const int M = 1910;
const int MOD = 998244353;
const double EPS = 1e-8;
const int INF = 0x3f3f3f3f;

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<ll> a(n + 1), pre(n + 1, 0), suf(n + 2, 0);
    for(int i = 1; i <= n; i++) {
        cin >> a[i];
        pre[i] = a[i] + n - i;
        suf[i] = a[i] + i - 1;
    }
    ll sum = 0;
    for(int i = 1; i <= n; i++) {
        pre[i] = max(pre[i - 1], pre[i]);
    }
    for(int i = n; i >= 1; i--) {
        suf[i] = max(suf[i + 1], suf[i]);
    }
    ll ans = LLONG_MAX;
    for(int i = 1; i <= n; i++) {
        ans = min(ans, max({a[i], pre[i - 1], suf[i + 1]}));
    }
    cout << ans << endl;
}

int32_t main() {
    IOS;
    int h_h = 1;
    // cin >> h_h;
    while (h_h--)solve();
    return 0;
}