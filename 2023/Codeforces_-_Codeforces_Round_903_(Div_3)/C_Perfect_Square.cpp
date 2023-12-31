/*
 * ==================================================================================
 * Author:  north_h
 * Time:    2023-10-12 22:38:05
 *
 * Problem: C. Perfect Square
 * Contest: Codeforces - Codeforces Round 903 (Div. 3)
 * URL:     https://codeforces.com/contest/1881/problem/C
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
    vector<string> a(n);
    for(auto &i : a)cin >> i;
    int ans = 0;
    for(int i = 0; i < n / 2; i++) {
        for(int j = i; j < n - i - 1; j++) {
            char a1 = a[i][j];
            char a2 = a[j][n - i - 1];
            char a3 = a[n - i - 1][n - j - 1];
            char a4 = a[n - j - 1][i];
            // debug2(a1, a2);
            // debug2(a3, a4);
            char op = max({a1, a2, a3, a4});
            ans += (op - a1) + (op - a2) + (op - a3) + (op - a4);
        }
    }
    cout << ans << endl;
}

int32_t main() {
    IOS;
    int h_h = 1;
    cin >> h_h;
    while (h_h--)solve();
    return 0;
}