//
//  Author : north_h
//  File : D.cpp
//  Time : 2023/7/22/19:42
//                  _   _         _
// _ __   ___  _ __| |_| |__     | |__
//| '_ \ / _ \| '__| __| '_ \    | '_ \
//| | | | (_) | |  | |_| | | |   | | | |
//|_| |_|\___/|_|   \__|_| |_|___|_| |_|
//                          |_____|

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
    int n;
    cin>>n;
    string s;
    cin >> s;
    bool a = false, b = false, c = false;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'A')a = true;
        if (s[i] == 'B')b = true;
        if (s[i] == 'C')c = true;
        if (a && b && c) {
            cout << i + 1 << endl;
            return;
        }
    }
}

int main() {
    IOS;
    int h_h = 1;
    //cin >> h_h;
    while (h_h--)solve();
    return 0;
}
