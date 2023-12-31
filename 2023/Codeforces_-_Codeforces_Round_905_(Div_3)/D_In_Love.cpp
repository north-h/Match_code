/*
 * ===========================================================================
 * Author:  north_h
 * Time:    2023-10-27 20:02:57
 *
 * Problem: D. In Love
 * Contest: Codeforces - Codeforces Round 905 (Div. 3)
 * URL:     https://codeforces.com/contest/1883/problem/D
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

struct L {
    int x;
    bool operator <(const L &l) const {
        return x > l.x;
    }
};


struct R {
    int x;
    bool operator <(const R &r) const {
        return x < r.x;
    }
};

void solve() {
    multiset<L> l;
    multiset<R> r;
    int q;
    cin >> q;
    while(q--) {
        char op;
        int a, b;
        cin >> op >> a >> b;
        if(op == '+') {
            l.insert({a});
            r.insert({b});
            // debug1(*l.rbegin());
        } else {
            l.erase(l.find({a}));
            r.erase(r.find({b}));
        }
        if(l.size() > 1) {
            if((*l.begin()).x > (*r.begin()).x) {
                cout << "YES" << endl;
            } else cout << "NO" << endl;
        } else cout << "NO" << endl;
    }
}

int32_t main() {
    IOS;
    int h_h = 1;
    // cin >> h_h;
    while (h_h--)solve();
    return 0;
}