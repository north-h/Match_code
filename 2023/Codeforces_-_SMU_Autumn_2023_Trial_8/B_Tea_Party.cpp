/*
 * ==================================================================================
 * Author:  north_h
 * Time:    2023-10-04 10:13:58
 *
 * Problem: B. Tea Party
 * Contest: Codeforces - SMU Autumn 2023 Trial 8
 * URL:     https://codeforces.com/group/L9GOcnr1dm/contest/475594/problem/B
 * MemoryL: 256 MB
 * TimeL:   1000 ms
 * ==================================================================================
 */

#pragma GCC optimize("Ofast")

#include <bits/stdc++.h>

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
    int n, m;
    cin >> n >> m;
    vector<PII> a(n);
    vector<int> ans(n);
    int sum = 0;
    for (int i = 0, x; i < n; i++) {
        cin >> x;
        sum += (x + 1) / 2;
        ans[i] = (x + 1) / 2;
        a[i].se = i;
        a[i].fi = x;
    }
    if (sum > m) {
        cout << -1 << endl;
        return ;
    }
    sort(rALL(a));
    sum = m - sum;
    for (int i = 0; i < n; i++) {
        int res = a[i].fi - ans[a[i].se];
        if (sum >= res) {
            sum -= res;
            ans[a[i].se] += res;
        } else {
            ans[a[i].se] += sum;
            break;
        }
    }
    for (int i = 0; i < n; i++) {
        cout << ans[i] << ' ';
    }
    cout << endl;
}

int32_t main() {
    IOS;
    int h_h = 1;
    // cin >> h_h;
    while (h_h--)solve();
    return 0;
}