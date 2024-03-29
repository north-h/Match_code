// #pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
#define ll long long
#define fi first
#define se second
#define PII pair<int, int>
#define endl '\n'
#define debug1(a) cout << #a << '=' << a << endl
#define debug2(a, b) cout << #a << '=' << a << ' ' << #b << '=' << b << endl
#define lf(x) fixed << setprecision(x)
#define PI acos(-1)
//  #define LOCAL
const int N = 10010;
const int INF = 0x3f3f3f3f;

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> mp(n);
    for (int i = 1, x; i <= n; i ++) {
        cin >> x;
        mp[x] ++;
    }
    int mex = INF;
    vector<int> ans;
    for (int i = 0; i < n; i ++) {
        if (mp[i] == 0) mex = min(mex, i);
        if (mp[i] == 1) ans.push_back(i);
    }
    if (ans.size() >= 2) cout << min(mex, ans[1]) << endl;
    else {
        if (mex == INF) cout << n << endl;
        else cout << mex << endl;
    }
}

int32_t main() {
#ifdef LOCAL
    freopen("data.in", "r", stdin);
    freopen("data.out", "w", stdout);
#endif
    ios::sync_with_stdio(false), cin.tie(nullptr);
    int h_h = 1;
    cin >> h_h;
    while (h_h--)solve();
    return 0;
}