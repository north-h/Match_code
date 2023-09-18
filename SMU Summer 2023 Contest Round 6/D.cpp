//
//  Author : north_h
//  File : D.cpp
//  Time : 2023/7/24/15:10
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
#define int long long
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
const int N = 300010;
const int M = 110;
const int MOD = 998244353;
const int EPS = 1e-8;
const int INF = 0x3f3f3f3f;

using namespace std;

int n;
int fact[N];
map<int,int> mp1,mp2;
map<PII,int> mp3;
vector<PII> a;

void solve() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        int x, y;
        cin >> x >> y;
        mp1[x]++;
        mp2[y]++;
        mp3[{x, y}]++;
        a.emplace_back(x, y);
    }
    fact[0] = 1;
    for (int i = 1; i <= n; i++)fact[i] = fact[i - 1] * i % MOD;
    int res1 = 1;
    int res2 = 1;
    int res3 = 1;
    for (auto i: mp1)res1 = res1 * fact[i.se] % MOD;
    for (auto i: mp2)res2 = res2 * fact[i.se] % MOD;
    for (auto i: mp3)res3 = res3 * fact[i.se] % MOD;
    sort(ALL(a));
    bool ok = true;
    for (int i = 1; i < a.size(); i++) if (a[i].se < a[i - 1].se)ok = false;
    int ans = (fact[n] - res1 + MOD) % MOD;
    ans = (ans - res2 + MOD) % MOD;
    if (ok)ans = (ans + res3) % MOD;
    cout << ans % MOD << endl;
}

int32_t main() {
    IOS;
    int h_h = 1;
    //cin >> h_h;
    while (h_h--)solve();
    return 0;
}