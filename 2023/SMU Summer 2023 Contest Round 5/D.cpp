//
//  Author : north_h
//  File : D.cpp
//  Time : 2023/7/21/15:45
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
    int n, k, s;
    cin >> n >> k >> s;
    int len=k;
    if ((n - 1) * k < s || k > s) {
        cout << "NO" << endl;
        return;
    }
    vector<int> ans;
    bool ok=true;
    while (len--) {
        if (s - (n - 1) > k - 1&&ok) {
            if (!ans.size()||ans.back() == 1 )ans.push_back(n);
            else ans.push_back(1);
            s -= (n - 1);
            k--;
        } else if (s - (n - 1) <= k - 1&&ok) {
            k--;
            int x=s-k;
            s = k;
            ok=false;
            if(!ans.size())ans.push_back(1+x);
            else if (ans.back() == 1)ans.push_back(1 + x);
            else ans.push_back(n - x);
        } else {
            if(!ans.size())ans.push_back(1);
            else if (ans.back() == 1)ans.push_back(ans.back() + 1);
            else if (ans.back() == n)ans.push_back(ans.back() - 1);
            else ans.push_back(ans.back() + 1);
        }
    }
    cout << "YES" << endl;
    for (auto i: ans)cout << i << ' ';
}

int32_t main() {
    IOS;
    int h_h = 1;
    //cin >> h_h;
    while (h_h--)solve();
    return 0;
}
