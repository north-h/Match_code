/*
 * ==================================================================================
 * Author:  north_h
 * Time:    2023-10-16 13:35:06
 *
 * Problem: A. Swap Adjacent Elements
 * Contest: Codeforces - SMU Autumn 2023 Trial 16
 * URL:     https://codeforces.com/group/L9GOcnr1dm/contest/478092/problem/A
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
    vector<int> a(n);
    for(auto &i : a)cin >> i;
    string s;
    cin >> s;
    int l = 0, r = 0, cnt;
    vector<PII> b;
    for(int i = 0; i < n; i++) {
        if(s[i] == '1')cnt++;
        else {
            int l = i - cnt, r = i;
            if(l < r)b.push_back({l, r});
            cnt = 0;
        }
    }
    if(l < r)b.push_back({l, r});
    for(auto [x, y] : b) {
        sort(a.begin() + x, a.begin() + y + 1);
    }
    if(is_sorted(ALL(a)))cout << "YES" << endl;
    else cout << "NO" << endl;
}

int32_t main() {
    IOS;
    int h_h = 1;
    // cin >> h_h;
    while (h_h--)solve();
    return 0;
}