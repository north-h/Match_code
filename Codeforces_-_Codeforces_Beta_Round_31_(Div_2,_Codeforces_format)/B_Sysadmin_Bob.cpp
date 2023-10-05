/*
 * ==================================================================================
 * Author:  north_h
 * Time:    2023-10-04 16:35:49
 *
 * Problem: B. Sysadmin Bob
 * Contest: Codeforces - Codeforces Beta Round 31 (Div. 2, Codeforces format)
 * URL:     https://codeforces.com/contest/31/problem/B
 * MemoryL: 256 MB
 * TimeL:   500 ms
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
    string s;
    cin >> s;
    vector<int> a;
    for(int i = 0; i < s.size(); i++) {
        if(s[i] == '@')a.push_back(i);
    }
    if(!a.size() || s[0] == '@' || s.back() == '@') {
        cout << "No solution" << endl;
        return ;
    }
    vector<string> ans;
    for(int i = 1; i < a.size(); i++) {
        if((a[i] - a[i - 1] - 1) < 2) {
            cout << "No solution" << endl;
            return ;
        }
    }
    int l = 0;
    for(int i = 0; i < a.size(); i++) {
        if(i < a.size() - 1) {
            cout << s.substr(l, a[i] - l + 2) << ",";
            l = a[i] + 2;
        } else cout << s.substr(l) << endl;
    }
}

int32_t main() {
    IOS;
    int h_h = 1;
    // cin >> h_h;
    while (h_h--)solve();
    return 0;
}