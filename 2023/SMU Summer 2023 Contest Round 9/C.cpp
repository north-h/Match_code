/*
Author : north_h
File : C.cpp
Time : 2023/8/1/19:24
                  _   _         _     
 _ __   ___  _ __| |_| |__     | |__  
| '_ \ / _ \| '__| __| '_ \    | '_ \ 
| | | | (_) | |  | |_| | | |   | | | |
|_| |_|\___/|_|   \__|_| |_|___|_| |_|
                          |_____|     
*/
#pragma GCC optimize(3)

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
const int N = 10010;
const int M = 110;
const int MOD = 998244353;
const int EPS = 1e-8;
const int INF = 0x3f3f3f3f;

using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    int x = 0, y = 0;
    int ans = 0;
    for (auto i: s) {
        if (i == 'U')x--;
        else if (i == 'D')x++;
        else if (i == 'L')y--;
        else y++;
        ans = max(ans, abs(x) + abs(y));
    }
    x = (k - 1) * x;
    y = (k - 1) * y;
    if (k > 1) {
        for (auto i: s) {
            if (i == 'U')x--;
            else if (i == 'D')x++;
            else if (i == 'L')y--;
            else y++;
            ans = max(ans, abs(x) + abs(y));
        }
    }
    cout << ans << endl;
}

int32_t main() {
    IOS;
    int h_h = 1;
    cin >> h_h;
    while (h_h--)solve();
    return 0;
}