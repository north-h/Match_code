/*
    Author : north_h
    File : A.cpp
    Time : 2023/7/26/14:58
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
    int n;
    cin >> n;
    int128 res = (int128) (1 + 2 * n - 1) * n / 2 % MOD;
    cout << (int) res << endl;
}

int32_t main() {
    IOS;
    int h_h = 1;
    //cin >> h_h;
    while (h_h--)solve();
    return 0;
}
