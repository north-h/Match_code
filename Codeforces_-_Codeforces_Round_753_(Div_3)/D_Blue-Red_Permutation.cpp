/*
 * ==================================================================================
 * Author:  north_h
 * Time:    2023-09-08 16:00:30
 *
 * Problem: D. Blue-Red Permutation
 * Contest: Codeforces - Codeforces Round 753 (Div. 3)
 * URL:     https://codeforces.com/contest/1607/problem/D
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
const int N = 10010;
const int M = 1910;
const int MOD = 98244353;
const double EPS = 1e-8;
const int INF = 0x3f3f3f3f;

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n), B, R;
    for(int i = 0; i < n; i++)cin >> a[i];
    string s;
    cin >> s;
    for(int i = 0; i < n; i++) {
        if(s[i] == 'B')B.push_back(a[i]);
        else R.push_back(a[i]);
    }
    sort(rALL(B));
    sort(rALL(R));
    // for(auto i : B)cout << i << ' ';
    // cout << endl;
    // for(auto i : R)cout << i << ' ';
    // cout << endl;
    for(int i = 1; i <= n; i++) {
        if(B.size()) {
            if(B.back() < i) {
                cout << "NO" << endl;
                return ;
            }
            B.pop_back();
        } else {
            // cout << i << ' ';
            if(R.back() > i) {
                cout << "NO" << endl;
                return ;
            }
            R.pop_back();
        }
    }
    cout << "YES" << endl;
}

int32_t main() {
    IOS;
    int h_h = 1;
    cin >> h_h;
    while (h_h--)solve();
    return 0;
}