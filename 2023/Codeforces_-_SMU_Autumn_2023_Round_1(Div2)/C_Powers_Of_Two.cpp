/*
 * ==================================================================================
 * Author:  north_h
 * Time:    2023-09-09 16:33:45
 *
 * Problem: C. Powers Of Two
 * Contest: Codeforces - SMU Autumn 2023 Round 1(Div.2)
 * URL:     https://codeforces.com/group/L9GOcnr1dm/contest/470092/problem/C
 * MemoryL: 256 MB
 * TimeL:   4000 ms
 * ==================================================================================
 */

#pragma GCC optimize("Ofast")

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

int lg2[32];

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> ans;
    queue<int> q;
    int sum = n;
    for(int i = 30; i >= 0; i--) {
        if(n >= lg2[i]) {
            n -= lg2[i];
            ans.push_back(lg2[i]);
            // q.push(lg2[i]);
        }
    }
    // for(auto i : ans)cout << i << ' ';
    // cout << endl;
    if((int)ans.size() > k || sum < k)cout << "NO" << endl;
    else  {
        cout << "YES" << endl;
        for(int i = 0; ans.size() < k; i++) {
            while(ans[i] != 1 && ans.size() < k) {
                ans[i] /= 2;
                ans.push_back(ans[i]);
            }
            if(ans.size() == k)break;
        }
        sort(ALL(ans));
        for(auto i : ans)cout << i << ' ';
        cout << endl;
    }
}

int32_t main() {
    lg2[0] = 1;
    for(int i = 1, j = 1; i <= 1e9; i *= 2, j++)lg2[j] = i;
    IOS;
    int h_h = 1;
    // cin >> h_h;
    while (h_h--)solve();
    return 0;
}