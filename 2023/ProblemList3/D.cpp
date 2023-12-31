//
//  Author : north_h
//  File : D.cpp
//  Time : 2023/7/24/14:56
//                  _   _         _     
// _ __   ___  _ __| |_| |__     | |__  
//| '_ \ / _ \| '__| __| '_ \    | '_ \ 
//| | | | (_) | |  | |_| | | |   | | | |
//|_| |_|\___/|_|   \__|_| |_|___|_| |_|
//                          |_____|     

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
#define ALL(a) a.begin(),a.end()
#define rALL(a) a.begin(),a.end()
#define int128 __int128
#define endl '\n'
const int N = 10010;
const int M = 110;
const int MOD = 998244353;
const int EPS = 1e-8;
const int INF = 0x3f3f3f3f;

using namespace std;

int dp[M][N];
int a[N];
int n, m;

void solve() {
    memset(dp, -0x3f, sizeof dp);
    cin >> n >> m;
    for (int i = 1; i <= n; i++)cin >> a[i];
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j <= 10000; j++) {
            dp[i][j] = dp[i - 1][j];
            dp[i][j] = max(dp[i][j], dp[i - 1][j + a[i]] + a[i]);
            dp[i][j] = max(dp[i][j], dp[i - 1][abs(j - a[i])] + a[i]);
        }
    }
    int ans = 0;
    for (int i = 0; i <= m; i++)ans = max(ans, dp[n][i]);
    cout << ans << endl;
}

int main() {
    IOS;
    int h_h = 1;
    //cin >> h_h;
    while (h_h--)solve();
    return 0;
}
