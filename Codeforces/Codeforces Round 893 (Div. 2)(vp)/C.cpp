/*
 * =====================================
 * Author : north_h
 * Time : 2023-08-16 09:10:21
 * Problem :
 * =====================================
 *                   _   _         _
 *  _ __   ___  _ __| |_| |__     | |__
 * | '_ \ / _ \| '__| __| '_ \    | '_ \
 * | | | | (_) | |  | |_| | | |   | | | |
 * |_| |_|\___/|_|   \__|_| |_|___|_| |_|
 *                           |_____|
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
const int N = 200010;
const int M = 1910;
const int MOD = 98244353;
const int EPS = 1e-8;
const int INF = 0x3f3f3f3f;

using namespace std;

void solve() {
    map<int, int> mp;
    int n;
    cin >> n;
    vector<int> ans(200010, 0);
    cout << 1 << ' ';
    ans[1] = 1;
    for(int i = 2; i <= n; i++) {
        if(!ans[i]) {
            for(int j = i; j <= n; j = j + j) {
                if(!ans[j]) {
                    cout << j << ' ';
                    ans[j] = 1;
                }
            }
        }
    }
    // for(int i = 1; i <= n; i++) {
    //     if(!ans[i])cout << i << ' ';
    //}
    cout << endl;
}

int32_t main() {
    IOS;
    int h_h = 1;
    cin >> h_h;
    while (h_h--)solve();
    return 0;
}