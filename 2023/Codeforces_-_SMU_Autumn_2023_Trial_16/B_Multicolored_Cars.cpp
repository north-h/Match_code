/*
 * ==================================================================================
 * Author:  north_h
 * Time:    2023-10-16 13:35:10
 *
 * Problem: B. Multicolored Cars
 * Contest: Codeforces - SMU Autumn 2023 Trial 16
 * URL:     https://codeforces.com/group/L9GOcnr1dm/contest/478092/problem/B
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
    int n, A;
    cin >> n >> A;
    vector<int> c(n);
    unordered_map<int, int>up;
    for(int i = 0; i < n; i++) {
        cin >> c[i];
        if(c[i] == A)up[A]++;
        else {
            if(up[c[i]] >= up[A])up[c[i]]++;
            else up[c[i]] = -1;
        }
    }
    int mx = *max_element(ALL(c));
    for(int i = 1; i <= mx; i++) {
        if(up[i] >= up[A] && i != A) {
            cout << i << endl;
            return ;
        }
    }
    cout << -1 << endl;
}

int32_t main() {
    IOS;
    int h_h = 1;
    // cin >> h_h;
    while (h_h--)solve();
    return 0;
}