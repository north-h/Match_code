/*
 * ==================================================================================
 * Author:  north_h
 * Time:    2023-09-26 15:11:33
 *
 * Problem: G. Make Them Equal
 * Contest: Codeforces - SMU Autumn 2023 Round 5
 * URL:     https://codeforces.com/group/L9GOcnr1dm/contest/475398/problem/G
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
#define int long long
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
const int N = 1010;
const int M = 1910;
const int MOD = 98244353;
const double EPS = 1e-8;
const int INF = 0x3f3f3f3f;

using namespace std;

int f[N];

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> b(n + 1), c(n + 1), dp(k + 1, 0);
    int ans = 0;
    for(int i = 1; i <= n; i++) {
        cin >> b[i];
        ans += f[b[i]];
    }
    int sum = 0;
    for(int i = 1; i <= n; i++)cin >> c[i], sum += c[i];
    if(ans <= k) {
        cout << sum << endl;
        return ;
    }
    for(int i = 1; i <= n; i++) {
        for(int j = k; j >= f[b[i]]; j--) {
            dp[j] = max(dp[j], dp[j - f[b[i]]] + c[i]);
        }
    }
    cout << dp[k] << endl;
}

int32_t main() {
    met_x(f);
    f[1] = 0;
    for(int i = 1; i <= 1000; i++) {
        for(int j = 1; j <= i; j++) {
            f[i + i / j] = min(f[i + i / j], f[i] + 1);
        }
    }
    // for(int i = 1; i <= 10; i++)cout << f[i] << ' ';
    // cout << endl;
    IOS;
    int h_h = 1;
    cin >> h_h;
    while (h_h--)solve();
    return 0;
}

