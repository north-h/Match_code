/*
 * ===========================================================================
 * Author:  north_h
 * Time:    2023-10-27 20:02:53
 *
 * Problem: C. Raspberries
 * Contest: Codeforces - Codeforces Round 905 (Div. 3)
 * URL:     https://codeforces.com/contest/1883/problem/C
 * MemoryL: 256 MB
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
    int n, k;
    cin >> n >> k;
    int ans = INF;
    vector<int> a(n);
    map<int, int> mp;
    for(auto &i : a) {
        cin >> i;
        int x = i;
        for(int j = 2; j <= x / j; j++) {
            if(x % j == 0) {
                while(x % j == 0)x /= j, mp[j]++;
            }
        }
        if(x > 1)mp[x]++;
    }
    // for(auto [x, y] : mp)cout << x << ' ' << y << endl;
    if(k == 2) {
        if(mp[2])cout << 0 << endl;
        else cout << 1 << endl;
    } else if(k == 3) {
        for(auto i : a) {
            if(i % 3 == 0) {
                cout << 0 << endl;
                return ;
            }
            ans = min(ans, k - i % k);
        }
        cout << ans << endl;
    } else if(k == 4) {
        if(mp[2] >= 2)cout << 0 << endl;
        else if(mp[2] == 1)cout << 1 << endl;
        else {
            int ans = 2;
            for(auto i : a) {
                ans = min(ans, k - i % k);
            }
            cout << ans << endl;
        }
    } else {
        for(auto i : a) {
            if(i % 5 == 0) {
                cout << 0 << endl;
                return ;
            }
            ans = min(ans, k - i % k);
        }
        cout << ans << endl;
    }
}

int32_t main() {
    IOS;
    int h_h = 1;
    cin >> h_h;
    while (h_h--)solve();
    return 0;
}