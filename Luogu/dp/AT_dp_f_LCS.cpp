/*
 * ===========================================================================
 * Author:  north_h
 * Time:    2023-11-01 11:14:25
 *
 * Problem: AT_dp_f LCS
 * Contest: Luogu
 * URL:     https://www.luogu.com.cn/problem/AT_dp_f
 * MemoryL: 1024 MB
 * TimeL:   2000 ms
 * ===========================================================================
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
#define PI acos(-1)
#define endl '\n'
#define lcm(x,y) x*y/__gcd(x,y)
#define debug1(a) cout<<#a<<'='<<a<<endl
#define debug2(a,b) cout<<#a<<'='<<a<<' '<<#b<<'='<<b<<endl
#define lf(x)   fixed << setprecision(x)
const int N = 1010;
const int M = 1910;
const int MOD = 998244353;
const double EPS = 1e-8;
const int INF = 0x3f3f3f3f;

using namespace std;

void solve() {
    string s, t;
    cin >> s >> t;
    // debug2(s, t);
    int n = s.size(), m = t.size();
    s = " " + s;
    t = " " + t;
    vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= m; j++) {
            if(s[i] == t[j])dp[i][j] = dp[i - 1][j - 1] + 1;
            else dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
        }
    }
    // for(int i = 1; i <= n; i++) {
    //     for(int j = 1; j <= m; j++) {
    //         cout << dp[i][j] << ' ';
    //     }
    //     cout << endl;
    // }
    string ans;
    while(n && m) {
        // debug2(n, m);
        // debug2(s[n], t[m]);
        if(s[n] == t[m]) {
            ans += s[n];
            n--;
            m--;
        } else if(dp[n][m] == dp[n - 1][m]) {
            n--;
        } else m--;
        // debug1(ans);
    }
    reverse(ALL(ans));
    cout << ans << endl;
}

int32_t main() {
    IOS;
    int h_h = 1;
    // cin >> h_h;
    while (h_h--)solve();
    return 0;
}